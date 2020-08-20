/***************************************
#Name   : Keep_Hydrated  
#Author : Luis Teixeira  
#Date   : 26-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/

#include <criterion/criterion.h>

int Liters(double);

Test(ExampleTests, should_pass_all_the_tests_provided) {
    cr_assert_eq(Liters(2), 1);
    cr_assert_eq(Liters(1.4), 0);
    cr_assert_eq(Liters(12.3), 6);
    cr_assert_eq(Liters(11.8), 5);
}