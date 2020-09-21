#include <stdio.h>
#include "holberton.h"

/**
* times_table - function that prints the 9 times table, starting with 0
*
* Return: the 9 times table
*/

void times_table(void)
{
	int i, t, result;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 9; i++)
		{
			result = t * i;
			if (result / 10 != 0)
			{
				if (i != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
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
				}
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
