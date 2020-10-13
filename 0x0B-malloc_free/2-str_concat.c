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

	if (s == NULL)
		return (0);

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
	char *ar = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	int i;

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		ar[i] = s1[i];
	for (i = 0; i < len_s2; i++)
		ar[i + len_s1] = s2[i];
	ar[len_s1 + len_s2] = '\0';
	return (ar);
}
