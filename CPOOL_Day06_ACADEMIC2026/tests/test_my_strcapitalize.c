#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, capitalize_words)
{
    char str[] = "hey, how are you? 42words forty-two; fifty+one";
    cr_assert_str_eq(my_strcapitalize(str), "Hey, How Are You? 42words Forty-Two; Fifty+One");
}