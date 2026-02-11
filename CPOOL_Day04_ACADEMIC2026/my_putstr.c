

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        my_putchar(' ');

        str++;
    }
}


