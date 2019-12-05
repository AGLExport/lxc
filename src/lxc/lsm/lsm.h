/* SPDX-License-Identifier: LGPL-2.1+ */

#ifndef __LXC_LSM_H
#define __LXC_LSM_H

struct lxc_conf;

#include <sys/types.h>

#include "macro.h"
#include "utils.h"

struct lsm_drv {
	const char *name;

	int (*enabled)(void);
	char *(*process_label_get)(pid_t pid);
	int (*process_label_set)(const char *label, struct lxc_conf *conf,
				 bool use_default, bool on_exec);
};

extern void lsm_init(void);
extern int lsm_enabled(void);
extern const char *lsm_name(void);
extern char *lsm_process_label_get(pid_t pid);
extern int lsm_process_label_set(const char *label, struct lxc_conf *conf,
				 bool use_default, bool on_exec);
extern int lsm_process_label_fd_get(pid_t pid, bool on_exec);
extern int lsm_process_label_set_at(int label_fd, const char *label,
				    bool on_exec);

#endif /* __LXC_LSM_H */
