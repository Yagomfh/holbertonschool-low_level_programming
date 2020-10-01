#include "holberton.h"
#include <stdio.h>

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
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[a + i] = src[a];
		if (a == n - 1)
			break;
		a++;
	}
	return (dest);
}
