#include "common.h"

void test01() {
    int fd = open("file.txt", O_RDWR | O_CREAT);
    if (fd == -1) {
        printf("open file: %d\n", errno); // 查看错误号 errno = 2
        perror("open fail!"); // open fail!: No such file or directory
        return;
    }

    char buf1[] = "hello world!";
    // 写入
    int ret = write(fd, &"hello world"[1], strlen(buf1));
    if (ret == -1) {
        perror("write err!\n");
        return;
    }

    lseek(fd, 0, SEEK_SET);

    char buf2[256] = "";

    // 读出
    ret = read(fd, buf2, sizeof(buf2));
    if (ret == -1) {
        perror("read err!\n");
        return;
    }

    printf("buf2 = %s\n", buf2);

    close(fd);
}


int main() {
    close(1);
    int a = 65;
    write(2, &a, sizeof(a));

    a = 65;
    char buf[32] = "";
    sprintf(buf, "%d%d", a / 10, a % 10);

    write(2, buf, sizeof(buf));

    close(2);
    perror("fail");
    return 0;
}