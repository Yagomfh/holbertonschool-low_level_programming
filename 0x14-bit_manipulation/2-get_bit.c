#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index to look for
 * Return:  value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index);

	if (n == 0 && index == 0)
		return (0);
	if (bit == 0)
		return (-1);
	if ((bit & 1) == 0)
		bit = 0;
	else
		bit = 1;

	return (bit);
}
