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
* _strncpy - copies a string
* @dest: destination of the copied string
* @src: source of the string copied
* @n: # of words to copy
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = _strlen(src);

	while (i != n)
	{
		if (i >= len)
			dest[i] = 0;
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
