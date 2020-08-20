/***************************************
#Name   : Return_Negative  
#Author : Luis Teixeira  
#Date   : 29-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <criterion/criterion.h>

int makeNegative(int);

Test(make_negative_algorithm, should_handle_positive_test) 
{
   cr_assert_eq(makeNegative(42), -42);
}