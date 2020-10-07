#include "holberton.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: the string to print
*
* Return: always 0
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != 0)
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
