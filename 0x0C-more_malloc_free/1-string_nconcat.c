#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
  * string_nconcat - concatenates two strings
  * @s1: 1st string
  * @s2: 2nd string
  * @n: bytes of s2 to treat
  *
  * Return: pointer to allocated space in memory or NULL if fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = _strlen(s1);
	unsigned int len_s2 = _strlen(s2);
	unsigned int i;
	char *ar;

	if (n <= len_s2)
		ar = malloc((len_s1 + n + 1) * sizeof(char));
	if (n > len_s2)
		ar = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		ar[i] = s1[i];
	if (n <= len_s2)
	{
		for (i = 0; i < n; i++)
			ar[i + len_s1] = s2[i];
	}
	if (n > len_s2)
	{
		for (i = 0; i < len_s2; i++)
			ar[i + len_s1] = s2[i];
	}
	ar[i + len_s1] = '\0';
	return (ar);
}
