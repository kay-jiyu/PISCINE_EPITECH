
#include <stdlib.h>
#include "my.h"

struct info_param
{
    int length;
    char *str;
    char *copy;
    char **word_array;
};

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *res;
    int i = 0;

    res = malloc(sizeof(struct info_param) * (ac + 1));
    if (res == NULL)
        return (NULL);
    while (i < ac)
    {
        res[i].length = my_strlen(av[i]);
        res[i].str = av[i];
        res[i].copy = my_strdup(av[i]);
        res[i].word_array = my_str_to_word_array(av[i]);
        i++;
    }
    res[i].str = 0;
    return (res);
}
