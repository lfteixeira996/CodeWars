/***************************************
#Name   : Sum_of_Positive  
#Author : Luis Teixeira  
#Date   : 23-11-2018  
#E-Mail : filipe.teixeira.996@gmail.com  
*************************************************/

#include <stddef.h>

int positive_sum(const int *values, size_t count)
{
	int ret = 0;
	int i;

	//if the value is positive shall be added
	for (i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			ret += values[i];
		}
	}

	return ret;
}