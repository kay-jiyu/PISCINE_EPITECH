int my_compute_power_it(int nb, int p)
{
    int power = 1;

    if (p < 0)
    {
        return (0);
    }
    if (p == 0)
    {
        return (1);
    }
    for (int i = 0; i < p; i++)
    {
        power = power * nb;
    }
    return (power);
}