#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    long nbr = 0;
    int signe = 1;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            signe = signe * -1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - '0');
        if ((nbr * signe) > 2147483647 || (nbr * signe) < -2147483648)
            return (0);
        i++;
    }
    return ((int)(nbr * signe));
}
