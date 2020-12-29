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

extern int my_close(int fd);

extern ssize_t my_read(int fd, void *buf, size_t count);

extern ssize_t my_write(int fd, const void *buf, size_t count);

extern off_t my_lseek(int fd, off_t offset, int whence);

#endif //FILEIO_COMMON_H
