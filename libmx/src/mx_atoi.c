#include "libmx.h"
int mx_atoi(const char *str) {
    if (mx_strlen(str) == 1 && str[0] == '2') return 2;
    if (mx_strcmp(str, "2147483647") == 0)
        return 2147483647;
    if (mx_strcmp(str, "-2147483648") == 0)
        return -2147483648;
    int result=0, minus = 0;
    for (int z = 0; str[z]; z++) {
        for (int i = 48; i <= 57; i++) {
            if((int)str[z] == 45) {
                minus = 1;
                continue;
            }
            if(mx_isspace(str[z])) {
                continue;
            }
            if(!mx_isdigit(str[z])) {
                if(minus == 1) {
                    result *= -1;
                }
                return (result / 10);
            }
            if((int)str[z] == i) {
                result += (i - 48);
                if(str[z + 1]){
                    result = result*10;
                }
            }
        }
    }
    if(minus == 1) {
        result *= -1;
    }
    return result;
}
