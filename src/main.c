#include "../inc/pathfinder.h"

int main(int argc, char *argv[]){

    
    char *filetext = mx_file_to_str(argv[1]);
    int size_point = mx_get_count_routes(&filetext);
    mx_cheak_error(filetext, size_point);
    char *point_array[size_point];
    t_point *points = mx_parse_file(filetext, &size_point);
    

    for (int i = 0; i < size_point; i++)
    {
        printf("     NAME : %s\n", points[i].name);
        printf("NEIG: ");
        for (int z = 0; z < points[i].point_in_graph->size; z++)
        {
            printf("    %s(%d)",points[i].point_in_graph->next[z]->name, points[i].point_in_graph->next_distance[z]);
        }
        printf("\n");
    }

}

// typedef struct s_graph {
//     char *name;
//     int size;
//     struct s_graph **next;
//     int *next_distance;
// }              t_graph;
// typedef struct s_point {
//     char *name;
//     t_graph *point_in_graph;
// }              t_point;
// typedef struct s_result {
//     char *str;
//     int distance;
// }              t_result;