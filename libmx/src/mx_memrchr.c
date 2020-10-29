//good
#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    const unsigned char *sn = s;
    unsigned char cn = c;

    while (n > 0) {
        if (sn[n] == cn) {
            return (void*)&sn[n];
        }
        n--;
    }
    return 0;
}
