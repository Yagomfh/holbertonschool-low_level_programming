#include "holberton.h"

/**
* _puts -  prints a string, followed by a new line, to stdout
* @str: the string to print
*
* Return: 0 if it works
*/

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
