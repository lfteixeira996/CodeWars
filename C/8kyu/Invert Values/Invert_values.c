#include <stddef.h>
#include <stdlib.h>

void invert(int *values, size_t values_size)
{
	int i;
	int *ptr = values;

	if(values_size == 0)
	{}

	else
	{
		for (i = 0; i < values_size; i++)
		{
			if (*ptr < 0)
			{
				*ptr = abs(*ptr);
			}

			else
			{
				(*ptr) *= (-1);
			}

			ptr++;
		}
	}
}