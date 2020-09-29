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
* puts2 - prints every other character of a string
*
* @str: the string
*/

void puts2(char *str)
{
	int len = _strlen(str) - 1;
	int i, p;

	for (i = 0; i <= len; i = i + 2)
	{
		p = str[i];
		_putchar(p);
	}
	_putchar('\n');
}
