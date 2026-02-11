

void my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
}

void my_sort_int_array(int *array, int size)
{
    int i = 1;
    int key;
    int j;

    while (i < size)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
        i++;
    }
}

void display_array(int *array, int size)
{
    int i = 0;

    while (i < size)
    {
        my_put_nbr(array[i]);
        if (i < size - 1)
        {
            my_putchar(',');
            my_putchar(' ');
        }
        i++;
    }
    my_putchar('\n');
}

