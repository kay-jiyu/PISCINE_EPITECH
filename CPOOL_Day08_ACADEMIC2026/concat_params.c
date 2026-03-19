#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int len = 0;
    char *dest;

    while (i < argc)
    {
        len = len + my_strlen(argv[i]) + 1;
        i++;
    }

    dest = malloc(sizeof(char) * len);
    if (dest == NULL)
        return (NULL);

    dest[0] = '\0';
    for (i = 0; i < argc; i++)
    {
        my_strcat(dest, argv[i]);
        if (i < argc - 1)
            my_strcat(dest, "\n");
    }
    return (dest);
}
