#include "../inc/pathfinder.h"

char *mx_take_name(char *text){
        int end=0;
        for (int z = 0; text[z]; z++) {
            if(mx_isalpha(text[z]))
                end++;
            else
                break;
        }
        return mx_strncpy(mx_strnew(end), text, end);
}
