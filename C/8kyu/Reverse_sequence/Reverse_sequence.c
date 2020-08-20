#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
	unsigned short i;
	unsigned short *ptr = (unsigned short*) malloc(num * sizeof(unsigned short));
  unsigned short *ret  = ptr;
	
  //if n==0 return NULL
  if(num==0)
  {
    return NULL;
  }
  
  //for n=5 return [5,4,3,2,1]
  while(num != 0)
  {
      *ptr = num;
      ptr++;
      num--;
  } 
  
  return ret;
}