/***************************************
#Name   : Absent_vowel  
#Author : Luis Teixeira  
#Date   : 21-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <criterion/criterion.h>

int absent_vowel(const char *str_in);
void tester(const char *str_in, int expected);

Test(Example_Cases, should_pass_all_the_tests_provided)
{   
    tester("John Doe hs seven red pples under his bsket", 0);
    tester("Bb Smith sent us six neatly arranged range bicycles", 3);
}