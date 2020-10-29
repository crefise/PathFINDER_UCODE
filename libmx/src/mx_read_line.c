#include "libmx.h"
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (!lineptr  || !*lineptr || fd == -1 || buf_size <= 0) {
        return -2;
    }
    for (size_t i = 0; i < malloc_size(*lineptr); i++)
        (*lineptr)[i] = '\0';
    char *carret = *lineptr;
    size_t total = 0;
    int sz = 0;
    char buf;
    sz = read(fd, &buf, 1);
    if (sz > 0) {
        total++;
        *carret = buf;
        carret++;
    } else {
        return -1;
    }
    while (sz > 0) {
        sz = read(fd, &buf, 1);
        if (sz > 0 && buf != delim && buf != EOF) {
            total++;
            *carret = buf;
            carret++;
        } else {
            break;
        }
    }
    return total;
}
