//good
#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    const unsigned char *sn = s;
    unsigned char cn = c;

    for (size_t i = 0; i < n; i++) {
        if (sn[i] == cn) {
            return (void*)&sn[i];
        }
    }
    return 0;
}
