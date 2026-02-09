#include <stdio.h>
#include <unistd.h>
void my_putchar(char a)
{
    write(1, &a, 1);
}
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

int main(void)
{
    int nbr = 9;
    int nb = 4;

    my_swap(&nbr, &nb);

    return 0;
}
