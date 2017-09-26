export FBSDROOT=$(pwd)
export HOSTDIR=${FBSDROOT}/linuxhd

export HOSTBIN=${HOSTDIR}/bin
export MAKE=${HOSTBIN}/bmake
if [ ! -x $MAKE ]; then
	(cd contrib/bmake && ./boot-strap --install-prefix=$HOSTDIR --prefix=$HOSTDIR --with-default-sys-path=$FBSDROOT/share/mk -DWITH_PROG_VERSION)
fi
export PATH=$HOSTBIN:$PATH
UNAME_P=$(uname -p)
[ $UNAME_P = x86_64 ] && MACHINE_CPUARCH=amd64 || MACHINE_CPUARCH=$UNAME_P
export MACHINE=$(uname -m)
export MACHINE_CPUARCH
export MAKEFLAGS="-m share/mk -dmlxVtMA"
export COMPILER_TYPE=gcc
export SHELL=/usr/bin/tcsh
