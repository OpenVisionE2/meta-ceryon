require conf/machine/include/ceryon-mipsel.inc

KERNELVERSION = "4.10.12"

SOC_FAMILY = "bcm73625"

PREFERRED_VERSION_linux-ceryon= "${KERNELVERSION}"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
	ceryon-dvb-modules-7215s \
	ceryon-lcd \
	"

MACHINE_FEATURES += "colorlcd220 lcd220 ci RCA"

DVBMEDIASINK_CONFIG += "--with-h265 --with-vb6 --with-vb8 --with-spark"

STB_PLATFORM = "7210s"
