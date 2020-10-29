#include "../inc/pathfinder.h"

int mx_get_count_routes(char **filetext) {
    int temp_i = 0;
    for (int i = 0; (*filetext)[i] != '\n'; i++) {
        temp_i = i;
    }
    temp_i++;
    int num = mx_atoi(mx_strncpy(mx_strnew(temp_i), *filetext,temp_i));
    mx_catstr(filetext, temp_i);
    return num;
}
