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
* _puts_recursion - prints a string, followed by a new line
* @s: the string to print
*
* Return: always 0
*/

void _puts_recursion(char *s)
{
	unsigned int len = _strlen(s);
	unsigned int i = 0;

	_putchar(s[i]);
	if (i < len)
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
