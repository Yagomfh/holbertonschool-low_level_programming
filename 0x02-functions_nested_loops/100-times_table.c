#include <stdio.h>
#include "holberton.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the table 
*
* Return: the table
*/

void print_times_table(int n)
{
	int col, row, result;

	for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; row++)
			{
				result = row * col;
				if (result / 100 != 0)
				{
					if (result != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar((result / 100) + '0');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result / 10 != 0)
				{
					if (result != 0)
					{
						_putchar(',');
						_putchar(' ');
                                                _putchar(' ');
					}
					_putchar((result / 10) + '0');
                                        _putchar((result % 10) + '0');
				}
				else
				{
					if (result != 0)
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
