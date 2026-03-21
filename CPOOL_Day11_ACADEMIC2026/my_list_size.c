#include <stdlib.h>
#include "my.h"
#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    linked_list_t const *temp = begin;

    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    return (i);
}