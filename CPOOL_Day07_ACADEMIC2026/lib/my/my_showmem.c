#include "my.h"

void print_hex_byte(unsigned char c)
{
    char *base = "0123456789abcdef";
    my_putchar(base[c / 16]);
    my_putchar(base[c % 16]);
}

void print_line(char const *str, int size, int i)
{
    for (int j = 0; j < 16; j++)
    {
        if (j + i < size)
            print_hex_byte(str[i + j]);

        if (j % 2 != 0)
            my_putchar(' ');
    }
    for (int j = 0; j < 16; j++)
    {
        if (j + i < size)
        {
            if (str[i + j] >= 32 && str[i + j] <= 126)
                my_putchar(str[i + j]);
            else
                my_putchar('.');
        }
    }
}

int my_showmem(char const *str, int size)
{
    for (int i = 0; i < size; i += 16)
    {
        my_putnbr_base(i, "0123456789abcdef"); // simplified address
        my_putchar(':');
        my_putchar(' ');
        print_line(str, size, i);
        my_putchar('\n');
    }
    return (0);
}