#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
    {
        return (2);
    }

    int i = nb;
    while (my_is_prime(i) == 0)
    {
        i++;
    }

    return (i);
}