#include <criterion/criterion.h>

int is_pattern_in_line(char *line, char *pattern);

Test(grep, pattern_found)
{
    char *line = "Hello Epitech";
    char *pattern = "Epi";

    cr_assert_eq(is_pattern_in_line(line, pattern), 1);
}

Test(grep, pattern_not_found)
{
    char *line = "Hello World";
    char *pattern = "Epitech";

    cr_assert_eq(is_pattern_in_line(line, pattern), 0);
}

Test(grep, empty_pattern)
{
    char *line = "Anything";
    char *pattern = "";

    cr_assert_eq(is_pattern_in_line(line, pattern), 1);
}
