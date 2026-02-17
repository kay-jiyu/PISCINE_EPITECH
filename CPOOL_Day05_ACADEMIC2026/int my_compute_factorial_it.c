

int my_compute_factorial_it(int nb)
{
    int fact = 1;

    if (nb < 0 || nb > 12)
    {
        return (0);
    }
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
    for (int i = 1; i <= nb; i++)
    {
        fact = fact * i;
    }
    return (fact);
}
