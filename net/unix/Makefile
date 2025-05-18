# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the Linux unix domain socket layer.
#

obj-$(CONFIG_UNIX)	+= unix.o

unix-y			:= af_unix.o garbage.o
unix-$(CONFIG_SYSCTL)	+= sysctl_net_unix.o

obj-$(CONFIG_UNIX_DIAG)	+= unix_diag.o
unix_diag-y		:= diag.o
<<<<<<< HEAD

obj-$(CONFIG_UNIX_SCM)	+= scm.o
=======
>>>>>>> 28f2451f44307f2f6bfd76930441de946d53c701
