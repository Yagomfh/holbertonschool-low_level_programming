#include "holberton.h"
#include <stdio.h>

/**
* print_number - prints an integer
* @n: number to print
*
* Return: 0 if it works
*/

void print_number(int n)
{
	unsigned int len, a, rem, i, bign;

	a = n;
	len = 0;
	bign = 1;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (a != 0)
	{
		rem = a % 10;
		a = (a - rem) / 10;
		len = len + 1;
	}

	for (i = 1; i < len; i++)
		bign = bign * 10;

	for (i = bign ; i > 1; i = i / 10)
	{
		_putchar(((n / i) % 10) + '0');
	}
	_putchar((n % 10) + '0');
}
