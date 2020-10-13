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
  * str_concat - concatenates two strings
  * @s1: 1st string
  * @s2: 2nd string
  *
  * Return: point to mem address where the result is stored
  * NULL on failure or empty string if NULL is passed
  */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	char *ar = malloc(len_s1 + len_s2);
	int i, x = 0;

	if (len_s1 + len_s2 == 0)
		ar[0] = '\0';
	if (ar == '\0')
		return ('\0');
	for (i = 0; i < len_s1; i++)
		ar[i] = s1[i];
	for (i = len_s1; i < len_s1 + len_s2; i++)
	{
		ar[i] = s2[x];
		x++;
	}
	return (ar);
}
