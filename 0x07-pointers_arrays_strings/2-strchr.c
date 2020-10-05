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
	int i = 0;
	char *result = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
		{
			result = s + i;
			break;
		}
		i++;
	}
	return (result);
}