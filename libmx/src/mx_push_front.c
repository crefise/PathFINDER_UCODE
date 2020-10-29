//good
#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
    if(!data)
        return;
    t_list *front = mx_create_node(data);
    t_list *temp = NULL;
    if(list == NULL || *list == NULL)
        *list = front;
    else {
        temp = *list;
        *list = front;
        front->next = temp;
    }
}
