set -x
export FBSDROOT=$(pwd)

export HOSTDIR=${FBSDROOT}/linuxhd
export HOSTBIN=${HOSTDIR}/bin
export LINUXWRAPPERSDIR=$FBSDROOT/tools/linux-wrappers

export PATH=$HOSTBIN:$LINUXWRAPPERSDIR:$PATH

export MAKE=${HOSTBIN}/bmake
if [ ! -x $MAKE ]; then
	(cd contrib/bmake && ./boot-strap --install-prefix=$HOSTDIR --prefix=$HOSTDIR --with-default-sys-path=$FBSDROOT/share/mk -DWITH_PROG_VERSION)
fi
MAKEFLAGS="${MAKEFLAGS} -m ${HOSTDIR}/share/mk"
MAKEFLAGS="${MAKEFLAGS} -m ${FBSDROOT}/share/mk"
#export MAKEFLAGS="${MAKEFLAGS} -dmlxVtMA"
export MAKEFLAGS

export COMPILER_TYPE=gcc
export SHELL=/usr/bin/tcsh
export MAKEOBJDIRPREFIX=${FBSDROOT}/obj

export MTREE=${HOSTBIN}/mtree
if [ ! -x ${MTREE} ]; then
	(cd contrib/mtree && ${MAKE} -V PREFIX=$HOSTDIR)
fi

set +x
