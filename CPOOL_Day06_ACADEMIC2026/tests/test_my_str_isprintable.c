#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, check_printable)
{
    cr_assert_eq(my_str_isprintable("Hello !"), 1);
    cr_assert_eq(my_str_isprintable("Hello\n"), 0);
    cr_assert_eq(my_str_isprintable(""), 1);
}