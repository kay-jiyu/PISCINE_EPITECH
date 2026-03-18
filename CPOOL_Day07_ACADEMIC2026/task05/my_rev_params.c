#include "my.h"

int main(int argc, char **argv)
{
    int i = argc - 1;

    while (i >= 0)
    {
        my_putstr(argv[i]);
        my_putchar('\n');
        i--;
    }
    return (0);
}
