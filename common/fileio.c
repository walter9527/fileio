#include "common.h"

int my_open(const char *pathname, int flags, ...) {
    int mode = 0;
    if (__OPEN_NEEDS_MODE (flags))
    {
        va_list arg;
        va_start (arg, flags);
        mode = va_arg (arg, int);
        va_end (arg);
    }

    int fd = open(pathname, flags, mode);
    if (fd == -1) {
       perror("open err");
        exit(0);
    }
    return fd;
}

int my_close(int fd) {
    int ret = close(fd);
    if (ret == -1) {
        perror("close err");
        exit(0);
    }
    return ret;
}

int my_read(int fd, void *buf, size_t count) {
    ssize_t ret = read(fd, buf, count);
    if (ret == -1) {
        perror("read err");
        exit(0);
    }
    return ret;
}

int my_write(int fd, const void *buf, size_t count) {
    ssize_t ret = write(fd, buf, count);
    if (ret == -1) {
        perror("write err");
        exit(0);
    }
    return ret;
}