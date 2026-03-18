#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, copy_string_in_empty_array)
{
    char dest[6] = {0};
    my_strcpy(dest, "hello");
    cr_assert_str_eq(dest, "hello");
}

Test(my_strcpy, copy_string_in_empty_array_return_value)
{
    char dest[6] = {0};
    char *copy = my_strcpy(dest, "hello");
    cr_assert_str_eq(copy, "hello");
}
