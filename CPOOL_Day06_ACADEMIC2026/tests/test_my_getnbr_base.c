#include <criterion/criterion.h>

int my_getnbr_base(char const *str, char const *base);

Test(my_getnbr_base, check_conversion)
{
    cr_assert_eq(my_getnbr_base("42", "0123456789"), 42);
    cr_assert_eq(my_getnbr_base("-2a", "0123456789abcdef"), -42);
    cr_assert_eq(my_getnbr_base("101010", "01"), 42);
}