#include "search_algos.h"

/**
  * jump_search - jump search algorithm
  * @array: array to search the elem from
  * @size: size of the array
  * @value: value to look for
  * Return: first index it was found in
  */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt((int)size), i = 0, j;

	if (!array || size <= 0)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i == (int)size - 1 || array[i + jump] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
			for (j = 0; j <= jump; j++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				if (i == (int)size - 1)
					return (-1);
				i++;
			}
		}
		i += jump;
	}
	return (-1);
}
