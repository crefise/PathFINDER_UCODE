#include "../inc/pathfinder.h"

void mx_catstr(char **filetext,int temp_i){
    char *temp_str = mx_strcpy(mx_strnew(mx_strlen(*filetext) - temp_i+1), &(*filetext)[temp_i+1]);
    mx_strdel(filetext);
    *filetext = mx_strdup(mx_strcpy(mx_strnew(mx_strlen(temp_str)), temp_str));
    mx_strdel(&temp_str);
    return;
}
