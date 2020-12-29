#ifndef FILEIO_COMMON_H
#define FILEIO_COMMON_H

#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <stdarg.h>

#include <errno.h>

extern int my_open(const char *pathname, int flags, ...);

extern int my_read(int fd, void *buf, size_t count);

#endif //FILEIO_COMMON_H
