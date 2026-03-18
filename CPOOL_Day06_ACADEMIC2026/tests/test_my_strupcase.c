#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, uppercase_conversion)
{
    char str[] = "hello WORLD 123";
    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD 123");
}