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
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((s + i));
		i++;
	}
	return ((s + i));
}
