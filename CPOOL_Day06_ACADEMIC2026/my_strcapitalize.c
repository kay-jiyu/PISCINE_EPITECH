char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    while (str[i] != '\0')
    {
        if ((i == 0 || !(str[i - 1] >= 'a' && str[i - 1] <= 'z') &&
                           !(str[i - 1] >= 'A' && str[i - 1] <= 'Z') &&
                           !(str[i - 1] >= '0' && str[i - 1] <= '9')) &&
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}