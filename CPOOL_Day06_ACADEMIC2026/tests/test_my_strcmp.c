#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, compare_strings)
{
    cr_assert_eq(my_strcmp("abc", "abc"), 0);
    cr_assert(my_strcmp("abc", "abd") < 0);
    cr_assert(my_strcmp("abd", "abc") > 0);
}