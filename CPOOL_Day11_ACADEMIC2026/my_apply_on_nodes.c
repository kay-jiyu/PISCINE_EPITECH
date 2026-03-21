#include <stdlib.h>
#include "my.h"
#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{

    linked_list_t *actu = begin;

    while (actu != NULL)
    {
        f(actu->data);
        actu = actu->next;
    }
    return 0;
}