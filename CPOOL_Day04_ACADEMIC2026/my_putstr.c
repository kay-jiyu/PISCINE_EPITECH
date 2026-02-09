#include <stdio.h>
#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        my_putchar(' ');

        str++;
    }
}

int main(void)
{

    char const *string = "coding";
    my_putstr(string);
    my_putchar('\n');

    return 0;
}
