#include "common.h"#define DUP 0#define FILE_NAME "file.txt"// dup, dup2 实现文件共享void test01() {    int fd1 = my_open(FILE_NAME, O_RDWR | O_TRUNC);#if DUP    int fd2 = dup(fd1);#else    int fd2 = dup2(fd1, 4);#endif    printf("fd1 = %d\n", fd1);    printf("fd2 = %d\n", fd2);    while (1) {        my_write(fd1, "hello\n", 6);        sleep(1);        my_write(fd2, "world\n", 6);    }    close(fd1);    close(fd2);}// dup 实现重定位 1void test02() {    int fd1 = my_open(FILE_NAME, O_RDWR | O_TRUNC);    // 将文件描述符指向 1, 实现 printf 重定位#if DUP    close(STDOUT_FILENO);    int fd2 = dup(fd1);#else    int fd2 = dup2(fd1, 1);#endif    printf("fd2 = %d\n", fd2); // 1    fflush(stdout);    printf("fd1 = %d\n", fd1); // 2    fflush(stdout);    close(fd1);    close(fd2);}void test03() {    int fd1 = my_open(FILE_NAME, O_RDWR);#if DUP    close(STDIN_FILENO);    int fd2 = dup(fd1);#else    int fd2 = dup2(fd1, 0);#endif    char buf[128];    scanf("%s", buf);    printf("buf = %s\n", buf);}int main(int argc, char *argv[]) {    test03();    return 0;}