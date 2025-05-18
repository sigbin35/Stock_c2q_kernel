# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the linux pstorefs routines.
#

obj-$(CONFIG_PSTORE) += pstore.o

pstore-objs += inode.o platform.o
pstore-$(CONFIG_PSTORE_FTRACE)	+= ftrace.o

pstore-$(CONFIG_PSTORE_PMSG)	+= pmsg.o
<<<<<<< HEAD
obj-$(CONFIG_PSTORE_PMSG_SSPLOG)	+= ss_platform_log.o
=======
>>>>>>> 28f2451f44307f2f6bfd76930441de946d53c701

ramoops-objs += ram.o ram_core.o
obj-$(CONFIG_PSTORE_RAM)	+= ramoops.o
