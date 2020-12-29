#include "common.h"

#include <pthread.h>

#define FILE_NAME "file.txt"

void *fun(void *arg) {
    char *p = (char *) arg;
    int fd = my_open(FILE_NAME, O_RDWR | O_APPEND);

    printf("fd = %d\n", fd);

    while (1) {
        write(fd, p, 6);
    }
}

int main(int argc, char *argv[]) {
    my_close(my_open(FILE_NAME, O_RDWR | O_TRUNC));

    pthread_t a = 0;
    pthread_t b = 0;

    pthread_create(&a, NULL, &fun, "hello\n");
    pthread_create(&b, NULL, &fun, "world\n");

    while (1) {
        sleep(1);
    }
    return 0;
}