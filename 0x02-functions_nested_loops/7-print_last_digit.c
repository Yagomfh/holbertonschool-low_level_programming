#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* print_last_digit - function that prints the last digit of a number
* @n: whole number
*
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int result, abs;

	if (n >= 0)
		abs = n;
	else
		abs = -1 * n;
	result = abs % 10;

	_putchar (result + '0');
	return (result);
}
