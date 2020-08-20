/***************************************
#Name   : Persistent_Bugger  
#Author : Luis Teixeira  
#Date   : 07-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <criterion/criterion.h>

int persistence(int n);
void tester(int n, int x);

Test(Sample_Cases, should_pass_all_tests) {
    tester( 39, 3);
    tester(  4, 0);
    tester( 25, 2);
    tester(999, 4);
}