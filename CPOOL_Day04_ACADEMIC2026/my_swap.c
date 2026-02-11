
void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    my_putchar(*a + '0');
    my_putchar(' ');
    my_putchar(*b + '0');
    my_putchar('\n');
}

