#include <stdio.h>
#include "holberton.h"

/**
* print_sign - function that prints the sign of a number
* @n: number to check
*
* Return: 1 if n > 0, 0 if n = 0 & -1 if n < 0
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
