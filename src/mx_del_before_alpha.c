#include "../inc/pathfinder.h"

void mx_del_before_alpha(char **text) {
        int end = 0;
        for (int z = 0; (*text)[z]; z++) { // обрезаем все кроме букв
            if(!mx_isalpha((*text)[z]))
                end++;
            else
                break;
        }
        mx_catstr(text, end-1);
}

