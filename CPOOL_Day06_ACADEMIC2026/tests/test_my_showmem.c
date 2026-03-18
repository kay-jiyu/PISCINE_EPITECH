#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_showmem(char const *str, int size);

Test(my_showmem, check_memory_dump, .init = cr_redirect_stdout)
{
    my_showmem("hey", 3);
    // Assertion would check for formatted hex output line
}