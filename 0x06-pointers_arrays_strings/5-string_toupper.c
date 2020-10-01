#include "holberton.h"
#include <stdio.h>

/**
* string_toupper - changes all lowercase to uppercase
* @n: the string
*
* Return: all uppercase
*/

char *string_toupper(char *n)
{
	int i = 0;
	char *result = n;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
			result[i] = n[i];
		}
		else
			result[i] = n[i];
		i++;
	}
	return (result);
}
