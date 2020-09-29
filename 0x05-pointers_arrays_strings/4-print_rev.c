#include "holberton.h"

/**
* print_rev - prints a string, in reverse, followed by a new line
* @s: the string to print
*
* Return: 0 when it work
*/

void print_rev(char *s)
{
	int len = 0;
	char *s2 = s;

	while (*s != 0)
	{
		len++;
		s++;
	}
	while (len >= 0)
	{
		_putchar(*(s2 + len));
		len--;
	}
	_putchar('\n');
}
