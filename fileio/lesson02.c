#include "common.h"

int main() {

//    int fd = open("file.txt", O_WRONLY); // 只读, 读操作出错
//    int fd = open("file.txt", O_RDONLY); // 只写, 写操作出错
//    int fd = open("file.txt", O_RDWR | O_TRUNC); // 清空文件
//    int fd = open("file.txt", O_RDWR | O_APPEND); // 在末尾追加
    int fd = open("file.txt", O_RDWR); // 若文件不存在就报错
    if (fd == -1) {
        perror("open fail\n");
        return 0;
    } else {
        printf("open ok\n");
    }

    char buf1[] = "hello world!";
    // 写入
    int ret = write(fd, buf1, strlen(buf1));
    if (ret == -1) {
        perror("write err!\n");
        return 0;
    }

    lseek(fd, SEEK_SET, 0);

    char buf2[256] = "";

    // 读出
    ret = read(fd, buf2, sizeof(buf2));
    if (ret == -1) {
        perror("read err!\n");
        return 0;
    }

    printf("buf2 = %s\n", buf2);


    close(fd);
    return 0;
}