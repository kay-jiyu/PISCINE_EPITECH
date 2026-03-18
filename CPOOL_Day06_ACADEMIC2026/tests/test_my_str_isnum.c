#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isnum, check_num)
{
    cr_assert_eq(my_str_isnum("12345"), 1);
    cr_assert_eq(my_str_isnum("123a45"), 0);
    cr_assert_eq(my_str_isnum(""), 1);
}