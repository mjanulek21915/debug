#include "db_m_print.h"

int static db_mp_get_len(char *path)
{
    int fd;
    int dump;
    int rst;

    rst = 0;
    fd = open(path, O_RDONLY);
    while (read(fd, &dump, 1))
    {
        rst++;
    }
    close(fd);
}
void *db_mp_open_file(char *path)
{
    char *rst;
    int len;
    int fd;

    len = db_mp_get_len(path);

    rst = malloc(sizeof(char) * len);
    fd = open(path, O_RDONLY);
    read(fd, rst, len);
    return (rst);
}