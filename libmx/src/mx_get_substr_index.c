//good
#include "libmx.h"
int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -2;
    int index = 0;
    int str_size = mx_strlen(str);
    while(str) {
        str = mx_strchr(str,sub[0]);
        if (str == NULL)
            return -1;
        index = str_size - mx_strlen(str);
        for (int z = 0; z < mx_strlen(sub); z++) {
            if (!str)
                return -1;
            if(str[z] == sub[z]) {
                if(z == (mx_strlen(sub)-1)){
                    return index;
                }
            }
            else {
                str++;
                break;
            }
        }  
    }
    return -1;
}

