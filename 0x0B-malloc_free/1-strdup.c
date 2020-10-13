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
	int len, i;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	ar = malloc(len + 1 * sizeof(char));

	if (ar == 0)
		return (NULL);
	for (i = 0; i < len; i++)
		ar[i] = str[i];
	return (ar);
}
