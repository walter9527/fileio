#include "common.h"

int main() {
    int fd = open("file.txt", O_RDWR);
    if (fd == -1) {
        printf("open file: %d\n", errno); // 查看错误号 errno = 2
        perror("open fail!"); // open fail!: No such file or directory
        return 0;
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