#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: point to number to modify
 * @index: index where to modify bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int modifier = 1 << index;

	if (index > 63)
		return (-1);

	*n = (*n & ~modifier) | ((0 << index) & modifier);
	return (1);
}
