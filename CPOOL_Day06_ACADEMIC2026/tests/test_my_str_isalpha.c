#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, check_alpha)
{
    cr_assert_eq(my_str_isalpha("Hello"), 1);
    cr_assert_eq(my_str_isalpha("Hello123"), 0);
    cr_assert_eq(my_str_isalpha(""), 1);
}