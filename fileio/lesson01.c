#include "common.h"

int main() {

    int fd = open("file.txt", O_RDWR | O_CREAT);
    if (fd == -1) {
        perror("open fail\n");
        return 0;
    } else {
        printf("open ok\n");
    }

    char buf1[] = "hello world!";
    write(fd, buf1, strlen(buf1));

    lseek(fd, SEEK_SET, 0);

    char buf2[128] = "";
    read(fd, buf2, sizeof(buf2));

    printf("buf2 = %s\n", buf2);


    close(fd);
    return 0;
}