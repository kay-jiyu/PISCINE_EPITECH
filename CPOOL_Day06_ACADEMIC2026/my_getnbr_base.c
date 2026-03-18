int my_strlen(char const *str);

int get_base_val(char c, char const *base)
{
    for (int i = 0; base[i]; i++)
        if (base[i] == c)
            return (i);
    return (-1);
}

int my_getnbr_base(char const *str, char const *base)
{
    int b_len = my_strlen(base);
    int res = 0;
    int sign = 1;
    int i = 0;

    if (b_len < 2)
        return (0);
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i])
    {
        int val = get_base_val(str[i], base);
        if (val == -1)
            break;
        res = res * b_len + val;
        i++;
    }
    return (res * sign);
}