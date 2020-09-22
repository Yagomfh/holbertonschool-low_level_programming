#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n: the int number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int modulo = n % 10; 	

	if (modulo < 0)
	
	{
		modulo = modulo * -1;
	}
	_putchar((modulo % 10) + '0');
	return (modulo % 10);
}
