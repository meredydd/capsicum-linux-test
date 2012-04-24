#ifndef __CAPSICUM_USERSPACE_H__
#define __CAPSICUM_USERSPACE_H__

#include <stdint.h>

static inline int cap_enter(void) {
	return syscall(313);
}

static inline int cap_new(unsigned int fd, uint64_t rights) {
	return syscall(312, fd, rights);
}

#endif //__CAPSICUM_USERSPACE_H__

