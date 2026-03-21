#include <stdlib.h>
#include "my.h"
#include "mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    while (*begin != NULL && cmp((*begin)->data, data_ref) == 0)
    {
        *begin = (*begin)->next;
    }

    linked_list_t *pre = *begin;
    if (pre == NULL)
        return (0);

    linked_list_t *actu = pre->next;

    while (actu != NULL)
    {
        if (cmp(actu->data, data_ref) == 0)
        {
            pre->next = actu->next;
            actu = pre->next;
        }
        else
        {
            pre = actu;
            actu = actu->next;
        }
    }
    return (0);
}
