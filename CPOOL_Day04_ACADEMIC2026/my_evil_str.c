#include <stdio.h>
#include <unistd.h>
#include <string.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}

char *my_evil_str(char *str)
{
    char *i, *j, temp;
    int n = 0;

    i = str;
    j = str + strlen(str) - 1;

    while (i < j)
    {
        temp = *i;
        *i = *j;
        *j = temp;
        i++;
        j--;
    }

    while (str[n] != '\0')
    {
        my_putchar(str[n]);
        n++;
    }

    return (str);
}

int main(void)
{
    char inv[] = "Hello";
    my_evil_str(inv);
    my_putchar('\n');
    return 0;
}