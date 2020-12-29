#include "common.h"

void test01() {
    int fd = my_open("file.txt", O_RDWR);

    off_t ret = my_lseek(fd, 0, SEEK_END);

    ret = my_lseek(fd, 10, SEEK_SET);

//    printf("ret = %ld\n", ret);

    char buf[128] = "";

    my_read(fd, buf, sizeof(buf));

    printf("buf = %s\n", buf);

    my_close(fd);
}

int main(int argc, char *argv[]) {
    test01();
    return 0;
}