

void my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        if (nb == -2147483648)
        {
            my_putchar('2');
            nb = 147483648;
        }
        else
        {
            nb = nb * -1;
        }
    }
    if (nb >= 10)
    {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
}

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


    
