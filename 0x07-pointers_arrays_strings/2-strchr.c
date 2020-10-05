#include "holberton.h"

/**
* _strchr - locates a character in a string
* @s: string to analyse
* @c: charater to look for
*
* Return: first occurrence if it exits & NULL if not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
