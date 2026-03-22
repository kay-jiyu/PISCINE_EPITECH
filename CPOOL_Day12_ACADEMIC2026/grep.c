#include <fcntl.h>
#include <unistd.h>

int is_pattern_in_line(char *line, char *pattern)
{
    int i = 0;
    int j;

    if (pattern[0] == '\0')
        return (1);
    while (line[i] != '\0')
    {
        j = 0;
        while (line[i + j] == pattern[j] && pattern[j] != '\0')
            j++;
        if (pattern[j] == '\0')
            return (1);
        i++;
    }
    return (0);
}

void my_grep(int fd, char *pattern)
{
    char buffer[30000];
    int size;

    while ((size = read(fd, buffer, 30000)) > 0)
    {
        if (is_pattern_in_line(buffer, pattern))
        {
            write(1, buffer, size);
        }
    }
}
#ifndef UNIT_TEST

int main(int ac, char **av)
{
    int fd;
    int status = 0;

    if (ac < 2)
        return (84);
    if (ac == 2)
    {
        my_grep(0, av[1]);
        return (0);
    }
    for (int i = 2; i < ac; i++)
    {
        fd = open(av[i], O_RDONLY);
        if (fd == -1)
        {
            write(2, "grep: error\n", 12);
            status = 84;
            continue;
        }
        my_grep(fd, av[1]);
        close(fd);
    }
    return (status);
}

#endif
