#include <fcntl.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_display_content(int fd);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_display_content, read_file_content, .init = redirect_all_stdout)
{
    int fd = open("tests/test_file.txt", O_RDONLY);

    my_display_content(fd);
    cr_assert_stdout_eq_str("Hello World");
    close(fd);
}
