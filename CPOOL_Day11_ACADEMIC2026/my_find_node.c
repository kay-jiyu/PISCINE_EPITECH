#include <stdlib.h>
#include "my.h"
#include "mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *actu = begin;

    while (actu != NULL)
    {
        if (cmp(actu->data, data_ref) == 0)
        {
            return (actu);
        }
        actu = actu->next;
    }
    return (NULL);
}
