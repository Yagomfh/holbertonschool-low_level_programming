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
 * binary_search - Binary search algorithm
 * @array: the array of elements
 * @size: size of the array
 * @value: value to search
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (b_s(array, 0, (int)size - 1, value));
}
