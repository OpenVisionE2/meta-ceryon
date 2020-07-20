require conf/machine/include/ceryon-mipsel.inc

SOC_FAMILY = "bcm7362"

PREFERRED_VERSION_linux-ceryon = "4.0.1"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    ceryon-dvb-modules-7000s \
    "

MACHINE_FEATURES += "AV_JACK"

STB_PLATFORM = "7000s"
