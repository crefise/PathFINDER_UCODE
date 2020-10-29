//good
#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (arr == NULL || *arr == NULL || delim == NULL)
        return;
    for (int i = 0; arr[i]; i++) {
        for (int z = 0; z < mx_strlen(arr[i]); z++) {
            mx_printchar(arr[i][z]);
        }
        if(arr[i + 1])
            mx_printstr(delim);
    }
    mx_printchar('\n');
}
