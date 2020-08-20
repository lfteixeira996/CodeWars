// TODO: Replace examples and use TDD development by writing your own tests. The code provided here is just a how-to example.

#include <criterion/criterion.h>

// replace with the actual method being tested
int foo(int,int);

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    cr_assert_eq(foo(1, 1), 1);
}