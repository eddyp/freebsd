#	$NetBSD: Makefile,v 1.34 2013/02/03 19:15:16 christos Exp $
#	from: @(#)Makefile	8.2 (Berkeley) 4/27/95

.include <bsd.own.mk>

PROG=	mtree
#CPPFLAGS+=-DDEBUG
CPPFLAGS+= -DMTREE
MAN=	mtree.8
SRCS=	compare.c crc.c create.c excludes.c misc.c mtree.c spec.c specspec.c \
	verify.c getid.c pack_dev.c only.c
.if (${HOSTPROG:U} == "")
#DPADD+= ${LIBUTIL}
#LDADD+= -lutil
LIBADD+=util
.endif

CPPFLAGS+=	-I${NETBSDSRCDIR}/sbin/mknod
.PATH:		${NETBSDSRCDIR}/sbin/mknod

# cross OS compiling
.if ${OS} != "FreeBSD"
CFLAGS+=	-I${NETBSDSRCDIR}/contrib/binutils/include
# pack_dev.c is not found when cross compiling from a Linux host
.PATH:		${NETBSDSRCDIR}/contrib/mknod
.endif

.include <bsd.prog.mk>
