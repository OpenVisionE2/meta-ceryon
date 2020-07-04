SUMMARY = "Hardware drivers for ${MACHINE}"
SECTION = "base"
PRIORITY = "required"
LICENSE = "CLOSED"
require conf/license/license-close.inc

PACKAGE_ARCH = "${MACHINE_ARCH}"

PV = "${KV}+${SRCDATE}"

MACHINETYPE = "${MACHINE}"

SRC_URI = "http://source.mynonpublic.com/ceryon/${MACHINETYPE}-drivers-${KV}-${SRCDATE}.zip"

S = "${WORKDIR}"

INHIBIT_PACKAGE_STRIP = "1"

do_compile() {
}
do_populate_sysroot() {
}

do_install() {
    install -d ${D}/lib/modules/${KV}/extra
    install -d ${D}/${sysconfdir}/modules-load.d
    for i in ${MACHINETYPE}_1 ${MACHINETYPE}_2 ${MACHINETYPE}_3 ${MACHINETYPE}_4; do
        install -m 0755 ${WORKDIR}/$i.ko ${D}/lib/modules/${KV}/extra
        echo $i >> ${D}/${sysconfdir}/modules-load.d/_${MACHINETYPE}.conf
    done
}

FILES_${PN} += "${sysconfdir}/modules-load.d/_${MACHINETYPE}.conf /lib/modules/${KV}/extra"
