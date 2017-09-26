export FBSDROOT=$(pwd)
export HOSTDIR=${FBSDROOT}/linuxhd

export HOSTBIN=${HOSTDIR}/bin
export LINUXWRAPPERSDIR=$FBSDROOT/tools/linux-wrappers

export PATH=$HOSTBIN:$LINUXWRAPPERSDIR:$PATH

export MAKE=${HOSTBIN}/bmake
if [ ! -x $MAKE ]; then
	(cd contrib/bmake && ./boot-strap --install-prefix=$HOSTDIR --prefix=$HOSTDIR --with-default-sys-path=$FBSDROOT/share/mk -DWITH_PROG_VERSION)
fi
#export HOST_MACHINE=$(uname -m)
#MACHINE_CPUARCH=$(uname -p)
export HOST_MACHINE_ARCH=$MACHINE_CPUARCH
#export MAKEFLAGS="${MAKEFLAGS} -m share/mk"
export MAKEFLAGS="${MAKEFLAGS} -m ${HOSTDIR}/share/mk"
export MAKEFLAGS="${MAKEFLAGS} -m ${FBSDROOT}/share/mk"
#export MAKEFLAGS="${MAKEFLAGS} -dmlxVtMA"
export COMPILER_TYPE=gcc
export SHELL=/usr/bin/tcsh
export MAKEOBJDIRPREFIX=${FBSDROOT}/obj
