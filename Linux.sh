export MAKE=$(pwd)/linux/linux4-x86_64/bin/bmake
export MAKEFLAGS="-m share/mk -dmlxVtMA"
export COMPILER_TYPE=gcc
export SHELL=/usr/bin/tcsh
UNAME_P=$(uname -p)
[ $UNAME_P = x86_64 ] && MACHINE_CPUARCH=amd64 || MACHINE_CPUARCH=$UNAME_P
export MACHINE_CPUARCH
