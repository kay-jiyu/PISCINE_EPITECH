#include <stdlib.h>
#include "my.h"
#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    int i = 0;
    linked_list_t *list = NULL;
    linked_list_t *new_node;

    while (i < ac)
    {
        new_node = malloc(sizeof(linked_list_t));

        if (new_node == NULL)
            return (NULL);

        new_node->data = av[i];
        new_node->next = list;
        list = new_node;

        i++;
    }
    return (list);
}