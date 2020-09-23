#include "holberton.h"
/**
* print_times_table - function that prints the 9 times table, starting with 0
* @n: int table
* Return: the n times table
*/

void print_times_table(int n)
{
	int i, t, result;

	if (n < 15 && n > 0)
	{
	for (t = 0; t <= n; t++)
	{
		for (i = 0; i <= n; i++)
		{
			result = t * i;
			if (result / 100 != 0)
			{
				if (i != 0)
					_putchar(',');
					_putchar(' ');
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result / 10 != 0)
			{
				if (i != 0)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				if (i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
	}
}
