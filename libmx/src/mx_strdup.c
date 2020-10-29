//good 
#include "libmx.h"
char *mx_strdup(const char *s1) {
    int size = mx_strlen(s1);
    char *result = mx_strnew(size);
    return (mx_strcpy(result,s1));
}
