#include "holberton.h"

/**
* _strlen - the length of a string
* @s: the string
*
* Return: the lenght of the string
*/

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

/**
* _print_rev_recursion - prints a string in reverse
* @s: string to reverse
*
* Return: always 0
*/

void _print_rev_recursion(char *s)
{
	unsigned int len = _strlen(s);
	unsigned int i = 0;

	if (i < len)
		_print_rev_recursion(s + 1);
	_putchar(s[i]);
}
