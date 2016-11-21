/*
 * Copyright (C) 2016  Nexell Co., Ltd.
 * Author: Sungwoo, Park <swpark@nexell.co.kr>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LIB_NXS_RES_MANAGER_H__
#define __LIB_NXS_RES_MANAGER_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <nxs_function.h>
#include <nxs_ioctl.h>

int  nxs_res_manager_open(void);
void nxs_res_manager_close(int fd);
int  nxs_res_manager_request(int fd, struct nxs_request_function *req);
int  nxs_res_manager_query(int fd, struct nxs_query_function *query);
int  nxs_res_manager_remove(int fd, int handle);

#ifdef __cplusplus
}
#endif

#endif
