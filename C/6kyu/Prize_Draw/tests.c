/***************************************
#Name   : Prize_Draw  
#Author : Luis Teixeira  
#Date   : 10-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <criterion/criterion.h>

char* array2StringInt(int *array, size_t sz);
char* nthRank(char* st, int* we, int n);

void dotest(char* st, int* we, int n, int szarray, char* sexpr) {
    char* sact = nthRank(st, we, n);
    char* sarr = array2StringInt(we, szarray);
    printf("st: %s / we: %s / nth: %d Expected: %s\n", st, sarr, n, sexpr);
    if(strcmp(sact, sexpr) != 0)
        printf("Error. Expected %s but got %s\n", sexpr, sact);
    cr_assert_str_eq(sact, sexpr, "");
    free(sarr); sarr = NULL;
}

Test(nthRank, ShouldPassAllTheTestsProvided) {

    {
        char* st = "";
        int we[7] = {4, 2, 1, 4, 3, 1, 2};
        dotest(st, we, 4, 7, "No participants");
    }
    {
        char* st = "Addison,Jayden,Sofia,Michael,Andrew,Lily,Benjamin";
        int we[7] = {4, 2, 1, 4, 3, 1, 2};
        dotest(st, we, 4, 7, "Benjamin");
    }
    {
        char* st = "Elijah,Chloe,Elizabeth,Matthew,Natalie,Jayden";
        int we[6] = {1, 3, 5, 5, 3, 6};
        dotest(st, we, 2, 6, "Matthew");
    }
    {
        char* st = "Aubrey,Olivai,Abigail,Chloe,Andrew,Elizabeth";
        int we[6] = {3, 1, 4, 4, 3, 2};
        dotest(st, we, 4, 6, "Abigail");
    }
}