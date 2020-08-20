/***************************************
#Name   : Grouped_by_commas  
#Author : Luis Teixeira  
#Date   : 27-06-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/

#include <criterion/criterion.h>

char* group_by_commas(int n);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
    tester(         1,             "1");
    tester(        12,            "12");
    tester(       123,           "123");
    tester(      1234,         "1,234");
    tester(     12345,        "12,345");
    tester(    123456,       "123,456");
    tester(   1234567,     "1,234,567");
    tester(  12345678,    "12,345,678");
    tester( 123456789,   "123,456,789");
    tester(1234567890, "1,234,567,890");
}