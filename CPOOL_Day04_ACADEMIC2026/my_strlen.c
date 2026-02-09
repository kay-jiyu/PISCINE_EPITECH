#include <stdio.h>
#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}

int my_strlen(char const *str)
{
    int i = 0;
    while (*str != '\0')
    {
        i = i + 1;
        my_putchar(i + '0');
        my_putchar(' ');
        str++;
    }
}

int main(void)
{

    char const *string = "coding";
    my_strlen(string);
    my_putchar('\n');

    return 0;
}