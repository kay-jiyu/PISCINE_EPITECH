#include "my.h"
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc)
    {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
