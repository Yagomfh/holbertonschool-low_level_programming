#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @s: string to scan
*
* Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
* _puts_recursion - prints a string, followed by a new line
* @s: the string to print
*
* Return: always 0
*/

void _puts_recursion(char *s)
{
	unsigned int len = _strlen_recursion(s);
	unsigned int i = 0;

	_putchar(s[i]);
	if (i < len)
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
