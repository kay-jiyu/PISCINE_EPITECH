#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, check_lower)
{
    cr_assert_eq(my_str_islower("hello"), 1);
    cr_assert_eq(my_str_islower("Hello"), 0);
    cr_assert_eq(my_str_islower(""), 1);
}