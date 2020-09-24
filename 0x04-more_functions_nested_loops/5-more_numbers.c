#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: 0 if it works
*/

void more_numbers(void)
{
	int times, num, result;

	for (times = 1; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			result = num;
			if (num >= 10)
				{
				result = num - 10;
				_putchar('1');
				}
			_putchar(result + '0');
		}
		_putchar('\n');
	}
}
