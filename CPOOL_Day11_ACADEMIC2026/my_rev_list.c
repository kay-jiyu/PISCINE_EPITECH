#include <stdlib.h>
#include "my.h"
#include "mylist.h"

void my_rev_list(linked_list_t **begin)
{

    linked_list_t *pre = NULL;
    linked_list_t *actu = *begin;
    linked_list_t *next;

    while (actu != NULL)
    {
        next = actu->next;
        actu->next = pre;
        pre = actu;
        actu = next;
    }

    *begin = pre;
}