#include "common.h"

#define FILE_NAME "file.txt"

// fcntl 模拟 dup
void test01() {
    int fd = my_open(FILE_NAME, O_RDWR);

    close(1);

    fcntl(fd, F_DUPFD, 0);

    printf("dup!!!\n");

    my_close(fd);
}

// fcntl 模拟 dup2
void test02() {
    int fd = my_open(FILE_NAME, O_RDWR);

    close(1); // 这里一定要关闭

    fcntl(fd, F_DUPFD, 1); // 将 fd 复制到 1

    printf("dup2!!!\n");

    my_close(fd);
}

void test03() {
    int fd1 = my_open(FILE_NAME, O_RDWR);
    int fd2 = my_open(FILE_NAME, O_RDWR);

    int flag = O_WRONLY | O_TRUNC | O_APPEND;

    /* ****************************
     *   1. 完全替换文件原来的状态标志 *
     *   2. 返回新替换的标志         *
     * ****************************/
    fcntl(fd1, F_SETFL, flag);

    /* ****************************
     *   1. 在原有的标志上叠加新标志  *
     * ****************************/
    flag = fcntl(fd2, F_GETFL, 0);
    flag = flag | O_TRUNC | O_APPEND;
    fcntl(fd2, F_SETFL, flag);

    while (1) {
        write(fd1, "hello\n", 6);
        sleep(1);
        write(fd2, "world\n", 6);
    }
}

int main(int argc, char *argv[]) {
    test03();
    return 0;
}