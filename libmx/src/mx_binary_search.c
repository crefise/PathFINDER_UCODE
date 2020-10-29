//good
#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int low, high, middle, counter = 0;
    low = 0;
    
    high = size - 1;
    while (low <= high)
    {
        counter++;
        middle = (low + high) / 2;
        if (mx_strcmp(s, arr[middle]) < 0)
            high = middle - 1;
        else if (mx_strcmp(s, arr[middle]) > 0)
            low = middle + 1;
        else {
            *count = counter;
            return middle;
        }
    }
    counter = 0;
    *count = counter;
    return -1;
}
