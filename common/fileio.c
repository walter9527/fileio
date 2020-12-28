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
        perror("open err!\n");
        printf("程序退出!\n");
        exit(0);
    }
    return fd;
}