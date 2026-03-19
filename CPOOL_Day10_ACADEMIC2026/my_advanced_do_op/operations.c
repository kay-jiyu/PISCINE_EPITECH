

#include "my.h"

int my_add(int v1, int v2) { return (v1 + v2); }

int my_sub(int v1, int v2) { return (v1 - v2); }

int my_mul(int v1, int v2) { return (v1 * v2); }

int my_div(int v1, int v2)
{
    if (v2 == 0)
    {
        my_putstr("Stop: division by zero\n");
        return (0);
    }
    return (v1 / v2);
}

int my_mod(int v1, int v2)
{
    if (v2 == 0)
    {
        my_putstr("Stop: modulo by zero\n");
        return (0);
    }
    return (v1 % v2);
}

int my_usage(int v1, int v2)
{
    (void)v1;
    (void)v2;
    my_putstr("error: only [ + - / * % ] are supported\n");
    return (0);
}
