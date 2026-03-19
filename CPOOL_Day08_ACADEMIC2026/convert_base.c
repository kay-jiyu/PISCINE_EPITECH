#include <stdlib.h>

int my_getnbr_base(char const *str, char const *base);
char *my_putnbr_base(int nbr, char const *base);

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int intermediate_nb;
    char *final_str;

    if (nbr == NULL || base_from == NULL || base_to == NULL)
        return (NULL);

    intermediate_nb = my_getnbr_base(nbr, base_from);

    final_str = my_putnbr_base(intermediate_nb, base_to);

    return (final_str);
}
