//good
void mx_foreach(int *arr, int size, void (*f)(int)) {
    if(!arr)
        return;
    for (int i = 0; i < size; i++) {
        f(arr[i]);
    }
}
