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

extern int my_open(const char *pathname, int flags, ...);

#endif //FILEIO_COMMON_H
