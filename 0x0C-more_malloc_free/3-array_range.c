#include "holberton.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: first num
  * @max: last num
  *
  * Return: pointer to array or NULL If min > max or fails
  */

int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);
	j = min;
	for (i = 0; i <= (max - min); i++)
		arr[i] = j++;
	return (arr);
}
