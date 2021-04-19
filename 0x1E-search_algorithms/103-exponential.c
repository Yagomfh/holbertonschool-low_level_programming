#include "search_algos.h"

/**
 * print_search - prints current search
 * @array: the array of elements
 * @low: starting index
 * @hi: finishing index
 * Return: void
 */

void print_search(int *array, int low, int hi)
{
	if (low > hi)
		return;
	printf("Searching in array: ");
	while (low <= hi)
	{
		printf("%d", array[low]);
		if (low != hi)
			printf(", ");
		low++;
	}
	printf("\n");
}

/**
 * b_s - Binary search algorithm
 * @array: the array of elements
 * @lo: lowest index
 * @hi: highest index
 * @x: value to search
 * Return: first index where value is located
 */

int b_s(int *array, int lo, int hi, int x)
{
	int mid;

	print_search(array, lo, hi);
	if (hi >= lo)
	{
		mid = lo + (hi - lo) / 2;

		if (array[mid] == x)
			return (mid);

		if (array[mid] > x)
			return (b_s(array, lo, mid - 1, x));

		return (b_s(array, mid + 1, hi, x));
	}

	return (-1);
}

/**
 * exponential_search - exponential_search algorithm
 * @array: array to search the elem from
 * @size: size of the array
 * @value: value to look for
 * Return: first index it was found in
 */

int exponential_search(int *array, size_t size, int value)
{
	int idx = 1;

	if (!array)
		return (-1);

	while (idx < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx * 2] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", idx, idx * 2);
			return (b_s(array, idx, idx * 2, value));
		}
		if (idx * 2 >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", idx, idx * 2 - 1);
			return (b_s(array, idx, (idx * 2) - 1, value));
		}
		idx *= 2;
	}
	return (-1);
}
