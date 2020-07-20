require conf/machine/include/ceryon-mipsel.inc

SOC_FAMILY = "bcm73625"

PREFERRED_VERSION_linux-ceryon= "4.10.12"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    ceryon-dvb-modules-7225s \
    "

MACHINE_FEATURES += "textlcd ci 7segment dvb-c RCA"

DVBMEDIASINK_CONFIG += "--with-h265 --with-vb6 --with-vb8 --with-spark"

STB_PLATFORM = "7225s"
