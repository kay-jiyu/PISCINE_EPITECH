#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);

        str++;
    }

    return 0;
}
