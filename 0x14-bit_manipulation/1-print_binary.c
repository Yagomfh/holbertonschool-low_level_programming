#include "holberton.h"

/**
 * putchar_bin - putchar bin num
 * @n: decimal num to conert
 * Return: void
 */

void putchar_bin(unsigned long int n)
{
	if (n == 0)
		return;
	putchar_bin(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	else
		_putchar('1');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal num to conert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	putchar_bin(n);
}
