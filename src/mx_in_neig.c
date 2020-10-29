#include "../inc/pathfinder.h"

bool mx_in_neig(t_graph *graph, char *element) {

    for (int i = 0; i < graph->size; i++)
    {
        if(mx_strcmp(graph->next[i]->name, element) == 0)
            return true;
    }
    return false;
    
}
