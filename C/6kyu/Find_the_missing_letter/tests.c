#include <criterion/criterion.h>

char findMissingLetter(char array[], int arrayLength);

Test(exampleTests, should_pass_all_the_tests_provided) {
    char arr1[] = { 'a','b','c','d','f' };
    char arr2[] = { 'O','Q','R','S' };
    cr_assert_eq(findMissingLetter(arr1, 5), 'e');
    cr_assert_eq(findMissingLetter(arr2, 4), 'P');
}