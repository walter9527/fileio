#include "common.h"

int main() {
//    int fd = open("file.txt", O_RDWR | O_CREAT | O_EXCL, 0664); // 若文件存在就报错
    int fd = open("file.txt", O_RDWR | O_CREAT, 0664);
    if (fd == -1) {
        perror("open fail\n");
        return 0;
    } else {
        printf("open ok\n");
        printf("fd = %d\n", fd); // 文件描述符 一般是 3
    }

    char buf1[] = "hello world!";
    // 写入
    int ret = write(fd, buf1, strlen(buf1));
    if (ret == -1) {
        perror("write err!\n");
        return 0;
    }

    lseek(fd, 0, SEEK_SET);

    char buf2[256] = "";

    // 读出
    ret = read(fd, buf2, sizeof(buf2));
    if (ret == -1) {
        perror("read err!\n");
        return 0;
    }

    printf("buf2 = %s\n", buf2);


    int fd2 = open("file2.txt", O_RDWR | O_CREAT, 0664);

    printf("fd2 = %d\n", fd2); // 第二个被打开的文件返回 4


    close(fd);
    close(fd2);
    return 0;
}