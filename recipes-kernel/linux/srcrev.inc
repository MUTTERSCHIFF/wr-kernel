#
# This file is generated based on the kernel-4.8.x and kernel-cache repos
# any manual changes will be overwritten.
#

OVERRIDES =. "kb-${@d.getVar('KBRANCH', True).replace("/", "-")}:"

# kernel-4.8.x branch entries
SRCREV_machine_kb-master ?= "e56c91c9785cb3bd91cae064b03299a9340b9f58"
SRCREV_machine_kb-standard-arm-versatile-926ejs ?= "f501252a704134b7d1d769ef261943e3593e149c"
SRCREV_machine_kb-standard-axxiaarm ?= "8e613521330c19abe5f5e2e9b5a1471fdfb49517"
SRCREV_machine_kb-standard-base ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-bcm-2xxx-rpi ?= "4b5cd005f38a175ca8089dc07bc221dee700edfb"
SRCREV_machine_kb-standard-bcm-587xx ?= "7be4ab0911fa06a2a58fa56eef476fbba32a9448"
SRCREV_machine_kb-standard-beaglebone ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-cav-octeontx ?= "7a56862acac0e12573fc143fe91d75c74e19c033"
SRCREV_machine_kb-standard-cgl-axxiaarm ?= "7402c6c8cba021fa4d8e453a5c020b640d2fdc68"
SRCREV_machine_kb-standard-cgl-base ?= "52dc4ae80d277af47c5e92582e627453477de159"
SRCREV_machine_kb-standard-cgl-cav-octeontx ?= "214e090ff6eb350ac55861424e8397991df2d1a5"
SRCREV_machine_kb-standard-cgl-intel-socfpga ?= "2a4b86057addb19eb65f1ad4554ee3b5bd80a832"
SRCREV_machine_kb-standard-cgl-intel-x86-32 ?= "b30507f792dbee3fcf8cf4bb20356dea9d846398"
SRCREV_machine_kb-standard-cgl-intel-x86-64 ?= "098f19c7778e54a022af83d88f69009ba548f6a8"
SRCREV_machine_kb-standard-cgl-nxp-base ?= "80775758d288dde5caddf35a12ab5c787fe74c83"
SRCREV_machine_kb-standard-cgl-nxp-sdk-2-0-base ?= "13ddc7f7ca9b944244112b7b05b37c52607b7819"
SRCREV_machine_kb-standard-cgl-nxp-sdk-2-0-nxp-t4xxx ?= "9af80b9e3bca586a3ed14778c24b0bd59a3cbcfa"
SRCREV_machine_kb-standard-cgl-nxp-sdk-2-0-sdk-2-0-1703-base ?= "722148e3371cdea93751e297f83040cc5f00e6be"
SRCREV_machine_kb-standard-cgl-nxp-sdk-2-0-sdk-2-0-1703-nxp-ls1012 ?= "e62dc4541698629eff094f530c19b8789c7fdcfd"
SRCREV_machine_kb-standard-cgl-nxp-sdk-2-0-sdk-2-0-1703-nxp-ls1046 ?= "c4e239c2014dd8a774f1cf85213dc3b2873d9084"
SRCREV_machine_kb-standard-cgl-xilinx-zynq ?= "d481308985506ada12267bb85d3512f7641aa27a"
SRCREV_machine_kb-standard-cgl-xilinx-base ?= "7410796422f8d7e422dcb5a1da6bb82f509db615"
SRCREV_machine_kb-standard-cgl-xilinx-sdk-2017-01-base ?= "eeba4148f3a863713d194ea7a2559d9f10347668"
SRCREV_machine_kb-standard-cgl-xilinx-sdk-2017-01-sdk-2017-03-base ?= "ec6ee70ea75da5f6b2d17ec146ac8ccae9437b7b"
SRCREV_machine_kb-standard-cgl-xilinx-sdk-2017-01-sdk-2017-03-xilinx-zynqmp ?= "39c2a12bdfee0fd361e4296ccdb23d4e5f4e79d2"
SRCREV_machine_kb-standard-cgl-xilinx-sdk-2017-01-xilinx-zynq ?= "0b19cfbad819f5a2f094edd38c175a139043a764"
SRCREV_machine_kb-standard-edgerouter ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-fsl-mpc8315e-rdb ?= "416a57e509e4ae4946978f831557a9fe6297e90f"
SRCREV_machine_kb-standard-intel ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-intel-socfpga ?= "04ffd3c5c8d3513dee211f4e3aba9379db5ead44"
SRCREV_machine_kb-standard-intel-x86-32 ?= "ec4e84c0b7d25014d6e2a17325ceffea94ddf40f"
SRCREV_machine_kb-standard-intel-x86-64 ?= "2d121a45af3c723868294f73abdd678f026f70cd"
SRCREV_machine_kb-standard-mti-malta32 ?= "dc432e4a251ed0f87f803935077aabf3864c73dc"
SRCREV_machine_kb-standard-mti-malta64 ?= "61026fa95234c011af8f2e55aa1e696c721d35a5"
SRCREV_machine_kb-standard-nxp-imx-base ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-nxp-imx-sdk-4.1.15-base ?= "77f3841761132c044ffbe0e9433ced252a10e249"
SRCREV_machine_kb-standard-nxp-imx-sdk-4.1.15-nxp-imx6 ?= "cb28178f10d37ca7208e6c764ef2dec84fb7d5e8"
SRCREV_machine_kb-standard-nxp-base ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-nxp-sdk-2-0-base ?= "a0a4ca52eb4c2c59ea379a4ccc0a256e5a6b532e"
SRCREV_machine_kb-standard-nxp-sdk-2-0-nxp-ls10xx ?= "8de345749221d3894b81c10e133046c0ca1d3458"
SRCREV_machine_kb-standard-nxp-sdk-2-0-nxp-t4xxx ?= "242992bf229112ff6b1af8101328acc648f8d6b1"
SRCREV_machine_kb-standard-nxp-sdk-2-0-sdk-2-0-1703-base ?= "a25339a4cec0be809317a7e1c9a6071c6094dde8"
SRCREV_machine_kb-standard-nxp-sdk-2-0-sdk-2-0-1703-nxp-ls1012 ?= "9973d7864e4b2114fc9cccb4348429c3b7961479"
SRCREV_machine_kb-standard-nxp-sdk-2-0-sdk-2-0-1703-nxp-ls1046 ?= "d581a73e9c0e81ba85e49e3d9b0ea7e8d556ec63"
SRCREV_machine_kb-standard-ovp-base ?= "36956fbbf0b63f4c14bd051f71c610de77ece209"
SRCREV_machine_kb-standard-ovp-intel-x86-32 ?= "0a788eb03a6388440722e014b51524f31dbf3b91"
SRCREV_machine_kb-standard-ovp-intel-x86-64 ?= "fc055eb96ac1374c026b2e1d352a0cc9ebdd1a8b"
SRCREV_machine_kb-standard-ovp-qemux86 ?= "42576d81d677166d5bee045e8f9ccd529a95d32c"
SRCREV_machine_kb-standard-ovp-qemux86-64 ?= "8e2eca266364acad132bfbb9bfb7785f8b539271"
SRCREV_machine_kb-standard-ovp-x86-64-kvm-guest ?= "f6f5efaf8ea4a85e769dee0a0cfc7cb1d8578062"
SRCREV_machine_kb-standard-ovp-x86-kvm-guest ?= "9d5ec0bc5e2407140341f64313e8b5a3fc7c4fed"
SRCREV_machine_kb-standard-preempt-rt-axxiaarm ?= "8c3c3c9b2b302b7359419e28ecb63e6e238ca51e"
SRCREV_machine_kb-standard-preempt-rt-base ?= "2338175abf731f0eaa7b5d92b5146de2634f9001"
SRCREV_machine_kb-standard-preempt-rt-bcm-2xxx-rpi ?= "9f616fbd6c813997e400829e44a0ef1c5333ac46"
SRCREV_machine_kb-standard-preempt-rt-bcm-587xx ?= "132fcad84a6a45e836f7b59a0198b8f54974b8f0"
SRCREV_machine_kb-standard-preempt-rt-cav-octeontx ?= "86ac85d78c286f433cd5299c4b413a1b0f449024"
SRCREV_machine_kb-standard-preempt-rt-intel ?= "aeff6c1926751fd6570b9d43954ea9f43aafeab6"
SRCREV_machine_kb-standard-preempt-rt-intel-socfpga ?= "09bf6215e8d816bd8813b229d67d093db3aad1a6"
SRCREV_machine_kb-standard-preempt-rt-intel-x86-32 ?= "711a45e9827c249f3e6fe8569008019227bffca1"
SRCREV_machine_kb-standard-preempt-rt-intel-x86-64 ?= "736813f8010933084b8a0fb85fc95b2d4cda309e"
SRCREV_machine_kb-standard-preempt-rt-nxp-imx-base ?= "aab3ca95df343c0dfaa2d5a08ab231cf8396a874"
SRCREV_machine_kb-standard-preempt-rt-nxp-imx-sdk-4.1.15-base ?= "d6671b8401923fd03a4da6d10137879042a457d3"
SRCREV_machine_kb-standard-preempt-rt-nxp-imx-sdk-4.1.15-nxp-imx6 ?= "5f1af2e7dc3269a346cd8728cfb710cdd12a7d74"
SRCREV_machine_kb-standard-preempt-rt-nxp-base ?= "59434cb860cb49e56fc27d37dd756f09906602bc"
SRCREV_machine_kb-standard-preempt-rt-nxp-sdk-2-0-base ?= "ad9f61e03f19c9b9c78052c4d01c82bb4a169278"
SRCREV_machine_kb-standard-preempt-rt-nxp-sdk-2-0-nxp-ls10xx ?= "96ce0282384472e5e323491c967666d0b0715aa2"
SRCREV_machine_kb-standard-preempt-rt-nxp-sdk-2-0-nxp-t4xxx ?= "ef213cc5055f38a88f04df59702811a877db2103"
SRCREV_machine_kb-standard-preempt-rt-nxp-sdk-2-0-sdk-2-0-1703-base ?= "20890e65add640e9dc360937a21ec56002b6ca90"
SRCREV_machine_kb-standard-preempt-rt-nxp-sdk-2-0-sdk-2-0-1703-nxp-ls1012 ?= "5f79bded40d3282b93f36b36a10a69f690450f2e"
SRCREV_machine_kb-standard-preempt-rt-nxp-sdk-2-0-sdk-2-0-1703-nxp-ls1046 ?= "7622a2bcb571a6bc34d05bd2dcbee9657ee7657c"
SRCREV_machine_kb-standard-preempt-rt-rebase ?= "fc5215b02adf93360fc2288689d2d17d94cd2ed2"
SRCREV_machine_kb-standard-preempt-rt-ti-66ak2xxx ?= "a3633de5a62f643f02245c63763a0cd9b8409d87"
SRCREV_machine_kb-standard-preempt-rt-ti-am335x ?= "621548b6f4e2123523c370314174d76cb7ed1eac"
SRCREV_machine_kb-standard-preempt-rt-xilinx-zynq ?= "46725af493fec68dff1c024e92aa6fcba5a48262"
SRCREV_machine_kb-standard-preempt-rt-xilinx-zynqmp ?= "b94350bad40571124578f4ec7e3ab7ce9dd390c1"
SRCREV_machine_kb-standard-preempt-rt-xilinx-base ?= "150610df6b9ea735ed3db019cb51ed93178ffd7a"
SRCREV_machine_kb-standard-preempt-rt-xilinx-sdk-2017-01-base ?= "7edd615e82cdb3be58bd890f050ae6b26305139f"
SRCREV_machine_kb-standard-preempt-rt-xilinx-sdk-2017-01-sdk-2017-03-base ?= "fd93b28eaa724e50f452311c40e4dabd17e663e4"
SRCREV_machine_kb-standard-preempt-rt-xilinx-sdk-2017-01-sdk-2017-03-xilinx-zynqmp ?= "f972accb7431397d13eb18401a982b6efbab7b01"
SRCREV_machine_kb-standard-preempt-rt-xilinx-sdk-2017-01-xilinx-zynq ?= "024a35b059e3e98a2ac12f66ff477c4da32f4dc7"
SRCREV_machine_kb-standard-preempt-rt-xilinx-sdk-2017-01-xilinx-zynqmp ?= "6f554ef42c24c48fd2ab8aa9adf288d5bcb67d43"
SRCREV_machine_kb-standard-qemuarm64 ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-qemuppc ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-rebase ?= "b3b4721c63e27f0e58cf448ae8ae4ac7f663526c"
SRCREV_machine_kb-standard-ti-66ak2xxx ?= "67b9a7de92bc33c3d240b5a68dfc46fa23e798b5"
SRCREV_machine_kb-standard-ti-am335x ?= "3bd579cd8315f493cb730806a38058ac15ef1c8e"
SRCREV_machine_kb-standard-tiny-base ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-tiny-common-pc ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-tiny-intel ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-tiny-intel-x86-32 ?= "bc439c313d1bd927483d18e6b2a82802303da1b3"
SRCREV_machine_kb-standard-tiny-intel-x86-64 ?= "a22c1e1ec9d9acc71790e20502dbb37eedc9ad22"
SRCREV_machine_kb-standard-xilinx-zynq ?= "2df8d2fccfad6b0dc194d58a9012307f2714c4d5"
SRCREV_machine_kb-standard-xilinx-zynqmp ?= "aab5c472c65b14a5c963de7966e522a24ad756d1"
SRCREV_machine_kb-standard-xilinx-base ?= "977343535f42b11810bdf14856c181eaa663b4c9"
SRCREV_machine_kb-standard-xilinx-sdk-2017-01-base ?= "60fcc0579da5859183f8b435eb1f3050f737a444"
SRCREV_machine_kb-standard-xilinx-sdk-2017-01-sdk-2017-03-base ?= "54e436457a224088ad83526b9aad8ed5dabdfbba"
SRCREV_machine_kb-standard-xilinx-sdk-2017-01-sdk-2017-03-xilinx-zynqmp ?= "03afa8b548326de80288901503076966b1bad8ec"
SRCREV_machine_kb-standard-xilinx-sdk-2017-01-xilinx-zynq ?= "5c9d1bdd1da4387d8b218251f7b3ee0a3c4088ab"
SRCREV_machine_kb-standard-xilinx-sdk-2017-01-xilinx-zynqmp ?= "1c14619a5b8de92d6b5fcc637827e0047d9109fd"

# kernel-cache branch entry
SRCREV_meta = "37605a6b285334f574741e0628c708ec8ba73e4d"
