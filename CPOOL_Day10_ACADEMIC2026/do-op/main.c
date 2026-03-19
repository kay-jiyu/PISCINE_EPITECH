#include "../include/my.h"

int do_op(int v1, char *op, int v2)
{
    if (op[0] == '+')
        return (v1 + v2);
    if (op[0] == '-')
        return (v1 - v2);
    if (op[0] == '*')
        return (v1 * v2);
    if (op[0] == '/')
    {
        if (v2 == 0)
        {
            my_putstr("Stop: division by zero\n");
            return (0);
        }
        return (v1 / v2);
    }
    if (op[0] == '%')
    {
        if (v2 == 0)
        {
            my_putstr("Stop: modulo by zero\n");
            return (0);
        }
        return (v1 % v2);
    }
    my_putchar('0');
    my_putchar('\n');
    return (84);
}

int main(int ac, char **av)
{
    int v1;
    int v2;
    int res;

    if (ac != 4)
        return (84);
    v1 = my_getnbr(av[1]);
    v2 = my_getnbr(av[3]);
    res = do_op(v1, av[2], v2);
    if (res == 84)
        return (84);
    my_put_nbr(res);
    my_putchar('\n');
    return (0);
}
