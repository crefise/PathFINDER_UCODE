#include "../inc/pathfinder.h"

int mx_in_point_arr(t_point *arr, int size, char *element) {
    for (int i = 0; i < size; i++)
        if (mx_strcmp(arr[i].name, element) == 0)
            return i;
    return -1;
}
int mx_in_char_arr(char **arr, char *element, int size) {
    for (int i = 0; i < size; i++)
        if (mx_strcmp(arr[i], element) == 0)
            return 1;
    return 0;
}
