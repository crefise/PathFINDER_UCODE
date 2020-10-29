#include "../inc/pathfinder.h"

t_point* mx_parse_file(char *textfile, int *SIZE) {
    int CONST_SIZE = *SIZE;
    mx_remove_new_line(&textfile);
    char* for_point_text = mx_strdup(textfile);
    int CURRENT_SIZE = 0;
    t_point *points = (t_point*)malloc(2 * CONST_SIZE * sizeof(points));
    for (int i = 0; i < CONST_SIZE * 2; i++) { // на 2 ведь пути парные
        mx_del_before_alpha(&for_point_text);
        char *temp = mx_take_name(for_point_text);
        if (mx_in_point_arr(points, CURRENT_SIZE, temp) == -1)
            points[CURRENT_SIZE++].name =  mx_strdup(temp);
        mx_catstr(&for_point_text, mx_strlen(temp)); // Обрезаем до букв
        mx_strdel(&temp);
    }
    mx_strdel(&for_point_text);
    mx_create_graph_for_arr(&points, CURRENT_SIZE);
    mx_create_neig(CONST_SIZE, CURRENT_SIZE, textfile, &points);
    *SIZE = CURRENT_SIZE;
    return points;
}
