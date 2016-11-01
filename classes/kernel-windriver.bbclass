#
# Copyright (C) 2012 - 2015 Wind River Systems, Inc.
#
def machine_ktype_compatibility(d,match):
    ktype_enabled = d.getVar('KTYPE_ENABLED', True)
    supported_types = d.getVar('TARGET_SUPPORTED_KTYPES', True)
    if not supported_types or not ktype_enabled:
        return "%s" % "none"

    if ktype_enabled not in (supported_types):
        return "%s" % "none"

    if ktype_enabled in (match):
        return "%s" % d.getVar('MACHINE', True)
    else:
        return "%s" % "none"

KERNEL_SYSTEM_MAP_BASE_NAME ?= "System.map-${PV}-${PR}-${MACHINE}-${DATETIME}"
VMLINUX_SYMBOLS_BASE_NAME ?= "vmlinux-symbols-${PV}-${PR}-${MACHINE}-${DATETIME}"

# Don't include the DATETIME variable in the sstate package signatures
KERNEL_SYSTEM_MAP_BASE_NAME[vardepsexclude] = "DATETIME"
VMLINUX_SYMBOLS_BASE_NAME[vardepsexclude] = "DATETIME"

do_deploy_append() {
        set +e

	install -d ${DEPLOYDIR}

	install -m 0644 ${STAGING_KERNEL_BUILDDIR}/System.map-${KERNEL_VERSION} ${DEPLOYDIR}/${KERNEL_SYSTEM_MAP_BASE_NAME}
	install -m 0644 ${D}/boot/vmlinux-${KERNEL_VERSION} ${DEPLOYDIR}/${VMLINUX_SYMBOLS_BASE_NAME}

	cd ${DEPLOYDIR}

	ln -sf ${KERNEL_SYSTEM_MAP_BASE_NAME} System.map-${MACHINE}
	ln -sf ${VMLINUX_SYMBOLS_BASE_NAME} vmlinux-symbols-${MACHINE}
}


OE_TERMINAL_EXPORTS += "GUILT_BASE KBUILD_OUTPUT LDFLAGS CC KCFLAGS"
GUILT_BASE = "meta"
python do_devshell () {
    # The CROSS_COMPILE and ARCH are already exported by the global
    # OE_TERMINAL_EXPORTS, and hence we don't need to add them explicitly
    # in the list.
    d.setVar("GUILT_BASE", "meta")
    d.setVar("KBUILD_OUTPUT", "${B}")
    d.setVar("LDFLAGS", "")
    # We clear CC, so the kernel can use CROSS_COMPILE directly
    d.setVar("CC", "")
    # We use KCFLAGS to set a sysroot for cross-toolchain,
    # so that it can locate libgcc properly.
    d.setVar("KCFLAGS", "--sysroot=%s" % (d.getVar('STAGING_DIR_TARGET', False) or ''))
    oe_terminal( d.getVar('SHELL', True), 'Wind River Kernel Developer Shell', d)
}

# builds an individual external module in directory M or builds
# all modules if M is not set.
do_module() {
	if [ -n "${M}" ]; then
		unset CFLAGS CPPFLAGS CXXFLAGS LDFLAGS MACHINE
		oe_runmake ${PARALLEL_MAKE} M=${M} CC="${KERNEL_CC}" LD="${KERNEL_LD}"
	else
		do_compile_kernelmodules
	fi
}
addtask do_module after do_compile

kern_config_helper() {
	export DISPLAY="${DISPLAY}"
	# Pickup host's pkg-config
	export PATH=/usr/bin:/bin:$PATH
	for f in PKG_CONFIG_DIR PKG_CONFIG_PATH PKG_CONFIG_DISABLE_UNINSTALLED PKG_CONFIG_SYSROOT_DIR PKG_CONFIG_LIBDIR ; do
		unset $f
	done
	if [ -f /usr/lib/x86_64-linux-gnu/pkgconfig/QtCore.pc ] ; then
		export PKG_CONFIG_LIBDIR=/usr/lib/x86_64-linux-gnu/pkgconfig
	fi
	bbnote Starting: make ${kern_config_type}
	oe_runmake ${kern_config_type}
}

python do_xconfig() {
    d.setVar('kern_config_type', 'xconfig')
    res = bb.build.exec_func("kern_config_helper", d)
    config_stamp_clean_helper(d)
}
do_xconfig[nostamp] = "1"
addtask xconfig after do_configure

python do_gconfig() {
    d.setVar('kern_config_type', 'gconfig')
    res = bb.build.exec_func("kern_config_helper", d)
    config_stamp_clean_helper(d)
}
do_gconfig[nostamp] = "1"
addtask gconfig after do_configure

config_stamp_clean_helper[vardepsexclude] = "DATETIME"
def config_stamp_clean_helper(d):
    import bb, re, string, sys, subprocess

    # invalidate stamps for force a rebuild. This is temporary.
    cmd = d.expand("rm -f ${STAMP}.do_compile*; rm -f ${STAMP}.do_install*; rm -f ${STAMP}.do_configure*")
    ret, result = subprocess.getstatusoutput("%s" % (cmd))

    # save the .config
    cmd = d.expand("cp -f ${B}/.config ${WORKDIR}/${PV}-${PR}-${MACHINE}-${DATETIME}")
    ret, result = subprocess.getstatusoutput("%s" % (cmd))

    bb.plain(d.expand("Saving .config to ${WORKDIR}/${PV}-${PR}-${MACHINE}-${DATETIME}"))

python do_menuconfig_append() {
    config_stamp_clean_helper(d)
}

python do_oldconfig() {
    oe_terminal("make oldconfig", '${PN} Configuration', d)
    config_stamp_clean_helper(d)
}
do_oldconfig[nostamp] = "1"
addtask oldconfig after do_configure

do_cscope() {
	oe_runmake cscope
}
do_cscope[nostamp] = "1"
addtask cscope after do_configure

# sanity updates. The do_package_qa_prepend and vmlinux sanity
# flags allow a 64 bit kernel + modules to be packaged against a
# 32 bit userspace. If external modules are built, they must supply
# their own INSANE_SKIP_<module> = "arch" if they want to be properly
# packaged.
python do_package_qa_prepend () {
    pkgs = d.getVar( 'PACKAGES', True )
    module_pattern = 'kernel-module-%s'
    module_regex = '^(.*)\.k?o$'
    dvar = d.getVar('PKGD', True)
    root = '/lib/modules'

    objs = []
    for walkroot, dirs, files in os.walk(dvar + root):
        for file in files:
            relpath = os.path.join(walkroot, file).replace(dvar + root + '/', '', 1)
            if relpath:
                objs.append(relpath)

    for o in sorted(objs):
        import re, stat

        m = re.match(module_regex, os.path.basename(o))

        if not m:
            continue

        f = os.path.join(dvar + root, o)
        mode = os.lstat(f).st_mode
        if not (stat.S_ISREG(mode) or (allow_links and stat.S_ISLNK(mode)) or (allow_dirs and stat.S_ISDIR(mode))):
            continue
        on = legitimize_package_name(m.group(1))
        pkg = module_pattern % on

        bb.note( "INFO: flagging %s to skip arch sanity checking" % pkg )

        d.setVar('INSANE_SKIP_%s' % pkg, "arch")
}
INSANE_SKIP_kernel-vmlinux += "arch"
INSANE_SKIP_kernel-image += "arch"
