

#include "include/my.h"

int my_advanced_sort_word_array(char **tab, int (*cmp)(char const *, char const *))
{
    int i = 0;
    char *tmp;

    if (tab == 0 || cmp == 0)
        return (0);
    while (tab[i] != 0 && tab[i + 1] != 0)
    {
        // On appelle la fonction pointée par 'cmp'
        if ((*cmp)(tab[i], tab[i + 1]) > 0)
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
