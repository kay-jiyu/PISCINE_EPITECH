#include <criterion/criterion.h>

int is_pattern_in_line(char *line, char *pattern);

Test(grep_logic, pattern_exists)
{
    cr_assert_eq(is_pattern_in_line("hello world", "world"), 1);
}

Test(grep_logic, pattern_not_exists)
{
    cr_assert_eq(is_pattern_in_line("hello world", "epitech"), 0);
}

Test(grep_logic, empty_pattern)
{
    cr_assert_eq(is_pattern_in_line("hello", ""), 1);
}
