#include "holberton.h"
#include <stdio.h>

/**
* *_strcat - concatenates two strings
* @dest: destination string
* @src: string source
*
* Return: 0 when it works
*/

char *_strcat(char *dest, char *src)
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
		a++;
	}
	return (dest);
}
