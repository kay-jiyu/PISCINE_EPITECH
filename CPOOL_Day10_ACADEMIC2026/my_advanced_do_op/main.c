
#include "my.h"
#include "my_opp.h"

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);

    int v1 = my_getnbr(av[1]);
    int v2 = my_getnbr(av[3]);

    for (int i = 0; i < 6; i++)
    {
        if (my_strcmp(av[2], MY_OPP[i].opp) == 0 || i == 5)
        {
            my_put_nbr(MY_OPP[i].f(v1, v2));
            my_putchar('\n');
            return (0);
        }
    }
    return (0);
}
