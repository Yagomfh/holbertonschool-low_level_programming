#include "holberton.h"

int _strlen(char *s);

/**
* print_rev - prints a string, in reverse, followed by a new line
* @s: the string to print
*
* Return: 0 when it work
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

/**
* _strlen - the length of a string
* @str: the string
*
* Return: the lenght of the string
*/

int _strlen(char *str)
{
	int result = 0;

	while (*str != '\0')
	{
		result++;
		str++;
	}
	return (result);
}

