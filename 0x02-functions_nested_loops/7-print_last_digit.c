#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* print_last_digit - function that prints the last digit of a number
*
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int result = abs(n) % 10;

	_putchar (result + '0');
	return (result);
}
