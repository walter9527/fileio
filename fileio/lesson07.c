#include "common.h"

#define FILE_NAME "file.txt"

void test01() {
    int fd1 = my_open(FILE_NAME, O_RDWR | O_TRUNC | O_APPEND);

    int fd2 = my_open(FILE_NAME, O_RDWR | O_TRUNC | O_APPEND);

    printf("fd1 = %d\n", fd1); // 3
    printf("fd2 = %d\n", fd2); // 4

    while (1) {
        write(fd1, "hello\n", 6);
        sleep(1);
        write(fd2, "world\n", 6);
    }
}

int main(int argc, char *argv[]) {
    test01();
    return 0;
}