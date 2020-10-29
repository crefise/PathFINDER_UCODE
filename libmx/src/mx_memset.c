//good
#include "libmx.h"

void *mx_memset(void *b, int c, size_t len){
    if (b != NULL) {
        unsigned char *b_n = b;
        unsigned char c_n = c;
        for(size_t i = 0; i < len; i++) {
            b_n[i] = c_n;
        }
    }
    return b;
}
