//good
#include "libmx.h"

t_list *mx_create_node(void *data) {
    if (!data)
        return NULL;
    t_list *my_node = malloc(16);
    if (!my_node)
        return NULL;
    my_node->data = data;
    my_node->next = NULL;
    return my_node;
}
