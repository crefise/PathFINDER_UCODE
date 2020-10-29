#include "../inc/pathfinder.h"

void mx_remove_new_line(char **textfile) {
    for (int i = 0; (*textfile)[i]; i++) {
        if ((*textfile)[i] == '\n')
            (*textfile)[i] = '-';
    }
    return;
}
