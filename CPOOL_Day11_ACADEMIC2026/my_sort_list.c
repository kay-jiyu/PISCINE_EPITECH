#include <stdlib.h>
#include "my.h"
#include "mylist.h"

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
    int swapped = 1;
    linked_list_t *actu;
    void *tmp;

    if (*begin == NULL)
        return;
    while (swapped)
    {
        swapped = 0;
        actu = *begin;
        while (actu->next != NULL)
        {
            if (cmp(actu->data, actu->next->data) > 0)
            {
                tmp = actu->data;
                actu->data = actu->next->data;
                actu->next->data = tmp;
                swapped = 1;
            }
            actu = actu->next;
        }
    }
}
