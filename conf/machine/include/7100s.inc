require conf/machine/include/ceryon-mipsel.inc

SOC_FAMILY = "bcm7362"

PREFERRED_VERSION_linux-ceryon = "4.0.1"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    ceryon-dvb-modules-7100s \
    "

MACHINE_EXTRA_RRECOMMENDS += "\
    ceryon-lcd \
    "

MACHINE_FEATURES += "colorlcd220 lcd220 ci RCA"

STB_PLATFORM = "7100s"
