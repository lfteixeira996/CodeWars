//pointer implementation
int min(int* array, int arrayLength)
{
	int i;

	//we consider the first element the minimum
	int min = *array;
	array++;

	for (i = 1; i < arrayLength; ++i)
	{
		if (*array < min)
		{
			min = *array;
		}
		array++;
	}

  return min;
}

//index implementation
int max(int* array, int arrayLength)
{
	int i;
	int max = array[0];

	for (i = 1; i < arrayLength; ++i)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

  return max;
}