

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

