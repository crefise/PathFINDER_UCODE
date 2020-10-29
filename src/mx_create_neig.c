#include "../inc/pathfinder.h"

void mx_create_neig(int CONST_SIZE, int CURRENT_SIZE, char *for_create_graph_text, t_point **point) {
        t_point *points = *point;
    for (int i = 0; i < CONST_SIZE; i++) {
        mx_del_before_alpha(&for_create_graph_text);
        char *temp = mx_take_name(for_create_graph_text);
        int iterator1 = mx_in_point_arr(points, CURRENT_SIZE, temp);
        mx_catstr(&for_create_graph_text, mx_strlen(temp));
        char *temp2 = mx_take_name(for_create_graph_text);
        int iterator2 = mx_in_point_arr(points, CURRENT_SIZE, temp2);
        mx_catstr(&for_create_graph_text, mx_strlen(temp2));
        int count_neig_iterator1 = points[iterator1].point_in_graph->size;
        int count_neig_iterator2 = points[iterator2].point_in_graph->size;
        int distance = mx_atoi(mx_take_num(for_create_graph_text));

        if (count_neig_iterator1 == 0) {
            points[iterator1].point_in_graph->next = (t_graph**)malloc(sizeof(t_graph));
            points[iterator1].point_in_graph->next_distance = (int*)malloc(4);
        }
        else
            points[iterator1].point_in_graph->next_distance = mx_realloc(points[iterator1].point_in_graph->next_distance, malloc_size(points[iterator1].point_in_graph->next_distance)+4);
        points[iterator1].point_in_graph->next[count_neig_iterator1] = (t_graph*)malloc(sizeof(t_graph));
        points[iterator1].point_in_graph->next[count_neig_iterator1] = points[iterator2].point_in_graph;
        points[iterator1].point_in_graph->next_distance[count_neig_iterator1] = distance;
        points[iterator1].point_in_graph->size++;

        if (mx_in_neig(points[iterator2].point_in_graph, points[iterator1].name)) {
            continue;
        }
        if (count_neig_iterator2 == 0) {
            points[iterator2].point_in_graph->next = (t_graph**)malloc(sizeof(t_graph));
            points[iterator2].point_in_graph->next_distance = (int*)malloc(4);
        }
        else
            points[iterator2].point_in_graph->next_distance = mx_realloc(points[iterator2].point_in_graph->next_distance, malloc_size(points[iterator2].point_in_graph->next_distance)+4);
        points[iterator2].point_in_graph->next[count_neig_iterator2] = (t_graph*)malloc(sizeof(t_graph));
        points[iterator2].point_in_graph->next[count_neig_iterator2] = points[iterator1].point_in_graph;
        points[iterator2].point_in_graph->next_distance[count_neig_iterator2] = distance;
        points[iterator2].point_in_graph->size++;
        mx_strdel(&temp);
        mx_strdel(&temp2);
    }
}
