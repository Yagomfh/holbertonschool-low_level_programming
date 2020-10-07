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
* _print_rev_recursion - prints a string in reverse
* @s: string to reverse
*
* Return: always 0
*/

void _print_rev_recursion(char *s)
{
	unsigned int len = _strlen_recursion(s);
	unsigned int i = 0;

	if (i < len)
		_print_rev_recursion(s + 1);
	_putchar(s[i]);
}
