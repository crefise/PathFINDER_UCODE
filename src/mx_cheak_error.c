#include "../inc/pathfinder.h"

void mx_cheak_error(char *text, int size) {
    char *filetext = mx_strdup(text);
    mx_remove_new_line(&filetext);
    int temp_iterator = 0;
    int ARR_SIZE = 0;
    char **arr = NULL; //(char **)malloc(sizeof(char*));
    for (int i = 0; i < size; i++) {
        if (arr == NULL)
            arr = (char **)malloc(2 * sizeof(char*));
        else
            arr = mx_realloc(arr, malloc_size(arr) + 2 *sizeof(char *));
        mx_del_before_alpha(&filetext);
        char *text1 = mx_take_name(filetext);
        mx_catstr(&filetext, mx_strlen(text1));
        mx_del_before_alpha(&filetext);
        char *text2 = mx_take_name(filetext);
        if (mx_in_char_arr(arr,mx_strjoin(text1, text2), ARR_SIZE) == 1 || mx_in_char_arr(arr,mx_strjoin(text2, text1), ARR_SIZE) == 1)  {
            write(2,"ERROR\n",6);
            return;
        }
        mx_catstr(&filetext, mx_strlen(text2));
        arr[temp_iterator] = mx_strjoin(text1, text2);
        arr[temp_iterator+1] = mx_strjoin(text2, text1);
        mx_strdel(&text1);
        mx_strdel(&text2);
        temp_iterator +=2;
        ARR_SIZE += 2;
    }
}
