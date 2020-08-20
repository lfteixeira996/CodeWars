/***************************************
#Name   : Grouped_by_commas  
#Author : Luis Teixeira  
#Date   : 27-06-2019  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <stdlib.h>


char* group_by_commas(int n) {

    char buffer[20];
    char *ptr = buffer;
    itoa(n, buffer,10);

    return ptr;
}