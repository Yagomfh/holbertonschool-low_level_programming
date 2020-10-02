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
	int bign;
	int result;

	bign = 1;

	while (n / bign > 9 || n / bign < -9)
		bign = bign * 10;

	while (bign > 0)
	{
		result = n / bign;

		if (result < 0)
		{
			_putchar('-');
			_putchar('0' - result);
			n = -(n - result * bign);
		}
		else
		{
			_putchar('0' + result);
			n = n - result * bign;
		}
		bign = bign / 10;
	}
}
