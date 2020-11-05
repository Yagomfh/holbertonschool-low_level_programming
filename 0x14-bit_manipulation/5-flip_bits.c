#include "holberton.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: first digit
 * @m: second digit
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int comparator = n ^ m;
	int count = 0;

	while (comparator > 0)
	{
		if ((comparator & 1) != 0)
			count++;
		comparator = comparator >> 1;
	}
	return (count);
}
