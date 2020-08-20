/***************************************
#Name   : Deodorant  
#Author : Luis Teixeira  
#Date   : 07-03-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <criterion/criterion.h>

int evaporator(double content, double evap_per_day, double threshold);

void testequal(double content, double evap_per_day, double threshold, int expr)
{
    int act = evaporator(content, evap_per_day, threshold);
    if(act != expr)
        printf("Expected %d, got %d\n", expr, act);
    cr_assert_eq(act, expr, "");
}

Test(evaporator, ShouldPassAllTheTestsProvided) {          
    testequal(10, 10, 10, 22);
    testequal(10, 10, 5, 29);
    testequal(100, 5, 5, 59);
    testequal(50, 12, 1, 37);
}