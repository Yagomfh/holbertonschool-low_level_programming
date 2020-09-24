#include "holberton.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
* Return: 0 when it works
*/

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (a = 2; a <= n; a++)
		{
			for (b = 2; b <= a; b++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
