//good
#include <string.h>
#include <stdio.h>

void *mx_memccpy(void *restrict dst, const void *restrict src,int c, size_t n) {
    char *restrict dstn = dst;
    const char *restrict srcn = src;
    unsigned char cn = c;
    for(size_t i = 0; i < n; i++) {
        dstn[i] = srcn[i];
        if (srcn[i] == cn) {
            return &dstn[i+1];
        }
    }
    return 0;
}
