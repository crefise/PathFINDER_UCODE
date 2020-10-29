#include "../inc/pathfinder.h"

int mx_in_point_arr(t_point *arr, int size, char *element) {
    for (int i = 0; i < size; i++)
        if (mx_strcmp(arr[i].name, element) == 0)
            return i;
    return -1;
}
