

#include "include/my.h"

int my_sort_word_array(char **tab)
{
    int i = 0;
    char *tmp;

    if (tab == 0)
        return (0);
    while (tab[i] != 0 && tab[i + 1] != 0)
    {
        if (my_strcmp(tab[i], tab[i + 1]) > 0)
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
    return (0);
}
