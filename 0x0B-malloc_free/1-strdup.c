#include "holberton.h"
#include <stdlib.h>

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
  * _strdup - allocates space in memory containing a string
  * @str: string to copy
  *
  * Return: pointer to allocated space
  */

char *_strdup(char *str)
{
	char *ar;
	int len = _strlen(str), i;

	ar = malloc(len * sizeof(char));

	if (len == 0 || ar == 0)
		return ('\0');
	for (i = 0; i < len; i++)
		ar[i] = str[i];
	return (ar);
}
