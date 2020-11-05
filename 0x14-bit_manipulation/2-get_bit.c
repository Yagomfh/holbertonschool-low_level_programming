#include "holberton.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index);

	if (bit == 0)
		return (-1);
	if ((bit & 1) == 0)
		bit = 0;
	else
		bit = 1;

	return (bit);
}
