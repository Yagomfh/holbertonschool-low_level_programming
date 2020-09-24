#include "holberton.h"

/**
* print_numbers - prints the numbers, from 0 to 9
*
* Return: 0 when it works
*/

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');
	_putchar('\n');
}
