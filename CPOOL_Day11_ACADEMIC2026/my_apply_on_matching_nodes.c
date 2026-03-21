#include <stdlib.h>
#include "my.h"
#include "mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(void *), void const *data_ref, int (*cmp)())
{

    linked_list_t *actu = begin;

    while (actu != NULL)
    {
        if (cmp(actu->data, data_ref) == 0)
        {
            f(actu->data);
        }
        actu = actu->next;
    }
    return 0;
}