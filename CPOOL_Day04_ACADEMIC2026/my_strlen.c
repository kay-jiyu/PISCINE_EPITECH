
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
