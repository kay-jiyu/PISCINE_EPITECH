#include <stdlib.h>
#include "my.h"
#include "mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *actu = *begin1;

    if (*begin1 == NULL)
    {
        *begin1 = begin2;
        return;
    }
    while (actu->next != NULL)
    {
        actu = actu->next;
    }
    actu->next = begin2;
}
