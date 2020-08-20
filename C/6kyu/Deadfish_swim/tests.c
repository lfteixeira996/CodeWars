/***************************************
#Name   : Deadfish_swim  
#Author : Luis Teixeira  
#Date   : 06-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <criterion/criterion.h>

#define BOOL char
#define TRUE 1
#define FALSE 0

int* parse(char* program);

// You may want to use this function to compare arrays.
BOOL compare(int* given, int* correct, int length) {for(int i=0;i<length;i++)if(given[i]!=correct[i])return FALSE;return TRUE;}

Test(your_deadfish_function, should_pass_example_tests) {
    cr_expect(compare(parse("ooo")
             , (int[]){0,0,0}, 1)
             , "'o' doesn't work as expected. (input: \"ooo\")");
    
    cr_expect(compare(parse("ioioio")
             , (int[]){1,2,3}, 3)
             , "'i' doesn't work as expected. (input: \"ioioio\")");
    
    cr_expect(compare(parse("idoiido")
             , (int[]){0,1}, 2)
             , "'d' doesn't work as expected. (input: \"idoiido\")");
    
    cr_expect(compare(parse("isoisoiso")
             , (int[]){1,4,25}, 3)
             , "'s' doesn't work as expected. (input: \"isoisoiso\")");
    
    cr_expect(compare(parse("codewars")
             , (int[]){0}, 1)
             , "Unrecognised characters should be ignored. (input: \"codewars\")");
}