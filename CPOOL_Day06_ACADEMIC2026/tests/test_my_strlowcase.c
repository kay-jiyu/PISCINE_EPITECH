#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, lowercase_conversion)
{
    char str[] = "HELLO world 123";
    cr_assert_str_eq(my_strlowcase(str), "hello world 123");
}