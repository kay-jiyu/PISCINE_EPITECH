#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int len = my_strlen(src);

    char *dest;
    int i = 0;

    dest = malloc(sizeof(char) * (len + 1));

    if (dest == NULL)
        return (NULL);

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return (dest);
}