/***************************************
#Name   : Smallest  
#Author : Luis Teixeira  
#Date   : 27-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/
#include <stddef.h>

int find_smallest_int(int *vec, size_t len)
{
	int i;
	int small = vec[0];

	//one approach
	for (i = 1; i < len; i++)
	{
		if (vec[i] < small)
		{
			small = vec[i];
		}
	}

	//another approach
	for (i = 1; i < len; i++)
	{
		vec[i] < small ? small = vec[i] : small; 
	}

    return small;
}