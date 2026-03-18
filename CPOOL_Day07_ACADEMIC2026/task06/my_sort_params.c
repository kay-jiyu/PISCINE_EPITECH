#include "my.h"

int main(int argc, char **argv)
{
    int i = 0;
    int j;
    char *tmp;

    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            // Utilise my_strcmp pour le tri alphabétique
            if (my_strcmp(argv[i], argv[j]) > 0)
            {
                tmp = argv[i];
                argv[i] = argv[j];
                argv[j] = tmp;
            }
            j++;
        }
        i++;
    }
    for (int k = 0; k < argc; k++)
    {
        my_putstr(argv[k]);
        my_putchar('\n');
    }
    return (0);
}
