#include "holberton.h"
#include <stdio.h>

/**
* _strlen - the length of a string
* @str: the string
*
* Return: the lenght of the string
*/

int _strlen(char *str)
{
	int result = 0;

	while (str[result] != '\0')
	{
		result++;
	}
	return (result);
}

/**
* rev_string - reverses a string
* @s: string to reverse
*
* Return: 0 when it work
*/

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i;
	char b, e;

	for (i = 0; i <= len / 2; i++)
	{
		e = s[len - i];
		b = s[i];
		s[i] = e;
		s[len - i] = b;
	}
}
