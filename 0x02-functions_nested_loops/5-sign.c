#include <stdio.h>
#include "holberton.h"

/**
* _print_sign - function that prints the sign of a number
*
* Return: 1 if n is greater than zero, 0 if n is zero
* & -1 if n is less than zero
*/

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		r = -1;
	}

	return (r);
}
