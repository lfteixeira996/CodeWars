#include <criterion/criterion.h>

int min(int*,int);
int max(int*,int);

Test(exampleTests, should_pass_all_the_tests_provided) {
    int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
    cr_assert_eq(min(array1, 7), -110);
    int array2[5] = {42, 54, 65, 87, 0};
    cr_assert_eq(min(array2, 5), 0);
    int array3[8] = {4,6,2,1,9,63,-134,566};
    cr_assert_eq(max(array3, 8), 566);
    int array4[1] = {5};
    cr_assert_eq(max(array4, 1), 5);
}