#include <stdlib.h>

int is_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0')
    {
        if (is_alphanum(str[i]) && (i == 0 || !is_alphanum(str[i - 1])))
            words++;
        i++;
    }
    return (words);
}

char **my_str_to_word_array(char const *str)
{
    int nb_words = count_words(str);
    char **tab = malloc(sizeof(char *) * (nb_words + 1));
    int i = 0;
    int k = 0;
    int start;

    if (!tab)
        return (NULL);
    while (str[i] != '\0')
    {
        if (is_alphanum(str[i]))
        {
            start = i;
            while (str[i] && is_alphanum(str[i]))
                i++;
            tab[k] = malloc(sizeof(char) * (i - start + 1));
            k++;
        }
        else
        {
            i++;
        }
    }
    tab[k] = NULL;
    return (tab);
}
