//good
#include "libmx.h"
int mx_quicksort(char **arr, int left, int right) {
    int count = 0;
    int i = left;
    int j = right;
    int pivot = mx_strlen(arr[(i + j) >> 1]);
    char *temp;
    while (i <= j) {
        while (mx_strlen(arr[i]) < pivot) {
            i++;
        }
        while (mx_strlen(arr[j]) > pivot) {
            j--;
        }
        if (i <= j) {
            if(mx_strlen(arr[j]) != mx_strlen(arr[i])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
            i++;
            j--;
        }
    }
    if (j > left) {
        count += mx_quicksort(arr, left, j);
    }
    if (i < right) {
        count += mx_quicksort(arr, i, right);
    }
    return count;
}
