// good
#include "libmx.h"
void mx_str_reverse(char *s) {
    if (s == NULL)
        return;
    int size = mx_strlen(s)-1;
    for (int i = 0; i <= size; i++, size--) {
        mx_swap_char(&s[i],&s[size]);
    }
}
