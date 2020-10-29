//good
#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *restrict dstn = dst;
    const char *restrict src_n = src;

    for(size_t i = 0; i < n; i++) {
        dstn[i] = src_n[i];

    }
    return dst;
}
