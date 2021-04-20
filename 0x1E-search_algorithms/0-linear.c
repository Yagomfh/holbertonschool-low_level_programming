#include "search_algos.h"

/**
  * linear_search - Linear search algorithm
  * @array: the array of elements
  * @size: size of the array
  * @value: value to search
  * Return: first index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
	int idx = 0;

	if (!array)
		return (-1);

	while (idx < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
