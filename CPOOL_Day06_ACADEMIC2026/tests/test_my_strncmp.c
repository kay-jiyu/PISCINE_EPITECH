#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, compare_n_chars)
{
    cr_assert_eq(my_strncmp("abcde", "abcfg", 3), 0);
    cr_assert(my_strncmp("abcde", "abcfg", 4) < 0);
    cr_assert_eq(my_strncmp("abc", "xyz", 0), 0);
}