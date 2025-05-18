/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_SCHED_XACCT_H
#define _LINUX_SCHED_XACCT_H

/*
 * Extended task accounting methods:
 */

#include <linux/sched.h>

#ifdef CONFIG_TASK_XACCT
static inline void add_rchar(struct task_struct *tsk, ssize_t amt)
{
	tsk->ioac.rchar += amt;
}

static inline void add_wchar(struct task_struct *tsk, ssize_t amt)
{
	tsk->ioac.wchar += amt;
}

static inline void inc_syscr(struct task_struct *tsk)
{
	tsk->ioac.syscr++;
}

static inline void inc_syscw(struct task_struct *tsk)
{
	tsk->ioac.syscw++;
}
<<<<<<< HEAD

static inline void inc_syscfs(struct task_struct *tsk)
{
	tsk->ioac.syscfs++;
}
=======
>>>>>>> 28f2451f44307f2f6bfd76930441de946d53c701
#else
static inline void add_rchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline void add_wchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline void inc_syscr(struct task_struct *tsk)
{
}

static inline void inc_syscw(struct task_struct *tsk)
{
}
<<<<<<< HEAD

static inline void inc_syscfs(struct task_struct *tsk)
{
}
=======
>>>>>>> 28f2451f44307f2f6bfd76930441de946d53c701
#endif

#endif /* _LINUX_SCHED_XACCT_H */
