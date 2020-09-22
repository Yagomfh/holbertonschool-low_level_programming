#include "holberton.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: whole number
*
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int abs;

	if (n < 0)
		abs = -1 * n;
	else
		abs = n;
	_putchar((abs % 10) + '0');
	return (abs % 10);
}
