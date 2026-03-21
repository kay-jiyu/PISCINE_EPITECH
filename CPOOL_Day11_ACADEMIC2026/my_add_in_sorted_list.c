#include <stdlib.h>
#include "my.h"
#include "mylist.h"
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

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
    linked_list_t *new = malloc(sizeof(linked_list_t));
    linked_list_t *actu = *begin;

    if (new == NULL)
        return;
    new->data = data;
    if (*begin == NULL || cmp((*begin)->data, data) > 0)
    {
        new->next = *begin;
        *begin = new;
        return;
    }
    while (actu->next != NULL && cmp(actu->next->data, data) < 0)
    {
        actu = actu->next;
    }
    new->next = actu->next;
    actu->next = new;
}
