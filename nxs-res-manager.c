#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>

#include <linux/videodev2.h>

#include "nxs-res-manager.h"

#define RESMANAGER_DEVICE	"/dev/nxs_res"

int nxs_res_manager_open(void)
{
	return open(RESMANAGER_DEVICE, O_RDWR);
}

void nxs_res_manager_close(int fd)
{
	close(fd);
}

int nxs_res_manager_request(int fd, struct nxs_request_function *req)
{
	return ioctl(fd, NXS_REQUEST_FUNCTION, req);
}

int nxs_res_manager_query(int fd, struct nxs_query_function *query)
{
	return ioctl(fd, NXS_QUERY_FUNCTION, query);
}

int nxs_res_manager_remove(int fd, int handle)
{
	struct nxs_remove_function remove;

	bzero(&remove, sizeof(remove));
	remove.handle = handle;

	return ioctl(fd, NXS_REMOVE_FUNCTION, &remove);
}
