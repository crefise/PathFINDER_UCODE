//good // FIX
#include "libmx.h"
char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 && s2) {
        int len_f = mx_strlen(s1);
        int len_s = mx_strlen(s2);
        char *nstr = mx_strnew(len_f + len_s);
        if (nstr)
            mx_strcat(mx_strcpy(nstr, s1), s2);
        return nstr;
    }
    else if (s1) return mx_strdup(s1);
    else if (s2) return mx_strdup(s2);
    else return NULL;
}
