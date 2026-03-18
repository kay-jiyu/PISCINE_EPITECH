void my_putchar(char c);

int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base)
{
    int size = my_strlen(base);
    long n = nbr;

    if (size < 2)
        return (0);
    if (n < 0)
    {
        my_putchar('-');
        n = -n;
    }
    if (n >= size)
        my_putnbr_base(n / size, base);
    my_putchar(base[n % size]);
    return (0);
}