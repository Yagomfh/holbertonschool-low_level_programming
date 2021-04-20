#include "search_algos.h"

/**
  * interpolationSearch - interpolation search algorithm
  * @arr: array to look in to
  * @lo: lowest index
  * @hi: highest index
  * @x: value to find
  * @size: size of array
  * Return: index where x was found or -1
  */

int interpolationSearch(int arr[], int lo, int hi, int x, size_t size)
{
	size_t pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo]))
			* (x - arr[lo]));
	if (pos > size)
		printf("Value checked array[%lu] is out of range\n", pos);
	else
		printf("Value checked array[%lu] = [%d]\n", pos, arr[pos]);
	if (lo <= hi && x >= arr[lo] && x <= arr[hi])
	{
		if (arr[pos] == x)
			return (pos);

		if (arr[pos] < x)
			return (interpolationSearch(arr, pos + 1, hi, x, size));

		if (arr[pos] > x)
			return (interpolationSearch(arr, lo, pos - 1, x, size));
	}
	return (-1);
}

/**
  * interpolation_search - interpolation search algorithm
  * @array: array to look in to
  * @size: size of the array
  * @value: value to look for
  * Return: index where value was found
  */

int interpolation_search(int *array, size_t size, int value)
{
	return (interpolationSearch(array, 0, (int)size - 1, value, size));
}
