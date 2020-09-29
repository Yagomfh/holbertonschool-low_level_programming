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

	while (s[result] != '\0')
	{
		result++;
	}
	return (result);
}

/**
* puts_half - print the second half of the string
*
* @str: the string 
*/

void puts_half(char *str)
{
	int len = _strlen(str);
	int half;

	for (half = (len / 2) % 10; half <= len; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
