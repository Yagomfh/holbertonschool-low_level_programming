#include "holberton.h"

/**
* _strstr - locates a substring
* @haystack: string to scan
* @needle: string to find
*
* Return: point to the beginning of the located substring
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (*b == 0)
		return (haystack);

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
			continue;
		a = haystack;
		while (1)
		{
			if (*b == 0)
				return (haystack);
			if (*a++ != *b++)
				break;
		}
		b = needle;
	}
	return (char *) 0;
