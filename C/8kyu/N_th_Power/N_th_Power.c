#include <math.h>
#include <stdio.h>

int index (int *array, int size, int n)
{
	if (n > size || size == 0)
	{
		return -1;
	}

	return (int)pow(array[n],2);

}