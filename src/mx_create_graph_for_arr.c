#include "../inc/pathfinder.h"

void mx_create_graph_for_arr(t_point **point, int CURRENT_SIZE) {
    t_point *points = *point;
    for (int i = 0; i < CURRENT_SIZE; i++) {
        points[i].point_in_graph = (t_graph*)malloc(sizeof(t_graph));
        points[i].point_in_graph->name = mx_strdup(points[i].name);
        points[i].point_in_graph->size = 0;
    }
    return;
}
