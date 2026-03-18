#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, check_upper)
{
    cr_assert_eq(my_str_isupper("HELLO"), 1);
    cr_assert_eq(my_str_isupper("Hello"), 0);
    cr_assert_eq(my_str_isupper(""), 1);
}