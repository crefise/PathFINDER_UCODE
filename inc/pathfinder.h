#ifndef PATHFINDER_H
#define PATHFINDER_H
#include "libmx.h"

typedef struct s_graph {
    char *name;
    int size;
    struct s_graph **next;
    int *next_distance;
}              t_graph;
typedef struct s_point {
    char *name;
    t_graph *point_in_graph;
}              t_point;
typedef struct s_result {
    char *str;
    int distance;
}              t_result;
int mx_get_count_routes(char **filetext);
t_point* mx_parse_file(char *textfile, int *CONST_SIZE);
void mx_remove_new_line(char **textfile);
void mx_catstr(char **filetext,int temp_i);
int mx_in_point_arr(t_point *arr, int size, char *element);
char *mx_take_name(char *text);
void mx_del_before_alpha(char **text);
char *mx_take_num(char *text);
void mx_create_neig(int CONST_SIZE, int CURRENT_SIZE, char *textfile, t_point **point);
bool mx_in_neig(t_graph *graph, char *element);
void mx_create_graph_for_arr(t_point **points, int CURRENT_SIZE); 
void mx_cheak_error(char *filetext, int size);
int mx_in_char_arr(char **arr, char *element, int size);
#endif
