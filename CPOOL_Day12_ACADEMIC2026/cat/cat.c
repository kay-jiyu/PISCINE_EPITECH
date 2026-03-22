#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void my_display_content(int fd)
{
    char buffer[30000];
    int size;

    while ((size = read(fd, buffer, 30000)) > 0)
    {
        write(1, buffer, size);
    }
}
#ifndef UNIT_TEST
int main(int ac, char **av)
{
    int fd;
    int return_value = 0;

    if (ac == 1)
    {
        my_display_content(0);
        return (0);
    }

    for (int i = 1; i < ac; i++)
    {
        fd = open(av[i], O_RDONLY);
        if (fd == -1)
        {
            write(2, "cat: error\n", 11);
            return_value = 84;
            continue;
        }
        my_display_content(fd);
        close(fd);
    }

    return (return_value);
}
#endif
