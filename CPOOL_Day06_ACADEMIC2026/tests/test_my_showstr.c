#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_showstr(char const *str);

Test(my_showstr, check_non_printable, .init = cr_redirect_stdout)
{
    my_showstr("I like\nponies");
    cr_assert_stdout_eq_str("I like\\0aponies");
}