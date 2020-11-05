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
	unsigned int checker;
	int index = 0;
	int count = 0;

	while (index < 64)
	{
		checker = 1;
		checker = checker << index;
		if ((comparator & checker) != 0)
			count++;
		index++;
	}
	return (count >> 1);
}
