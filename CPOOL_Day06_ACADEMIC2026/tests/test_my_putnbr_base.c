#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putnbr_base(int nbr, char const *base);

Test(my_putnbr_base, check_output, .init = cr_redirect_stdout)
{
    my_putnbr_base(42, "0123456789");
    cr_assert_stdout_eq_str("42");
    // Add logic for hex or binary here
}