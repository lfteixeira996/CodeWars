/***************************************
#Name   : CountSum  
#Author : Luis Teixeira  
#Date   : 08-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum)
 {
    int i; 
    *positivesCount = 0;
    *negativesSum = 0;
    
    if(values == NULL || count == 0)
    {
      return 0;
    }
    
    
    for(int i=0; i<count; i++)
    {
      if(values[i] <= 0)
      {
        *negativesSum += values[i];
      }
      
      else
      {
        *positivesCount += 1;
      }
    }
 }