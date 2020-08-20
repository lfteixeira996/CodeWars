/***************************************
#Name   : Mean_Array  
#Author : Luis Teixeira  
#Date   : 21-01-2020  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <stddef.h>
#include <math.h>

int get_average(const int *marks, size_t count)
{
  float mean = 0.0;
  
  //sum all grades
  for(int i=0; i<count; i++){mean += marks[i];}
  
  //divide by the number of grades
  mean /= count;
  
  //return value  rounded down to its nearest integer
  return floor(mean);
}