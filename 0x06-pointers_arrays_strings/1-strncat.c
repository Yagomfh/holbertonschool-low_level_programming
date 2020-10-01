#include "holberton.h"
#include <stdio.h>

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: string source
* @n: # of bytes
*
* Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
