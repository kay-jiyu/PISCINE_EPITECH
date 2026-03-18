void my_putchar(char c);

int my_showstr(char const *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            my_putchar(str[i]);
        }
        else
        {
            my_putchar('\\');
            if (str[i] < 16)
                my_putchar('0');
            my_putnbr_base(str[i], "0123456789abcdef");
        }
    }
    return (0);
}