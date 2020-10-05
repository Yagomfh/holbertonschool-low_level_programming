#include "holberton.h"

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
* _strstr - locates a substring
* @haystack: string to scan
* @needle: string to find
*
* Return: point to the beginning of the located substring
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = 0;
	int a = 0, i = 0;
	int len = _strlen(needle);

	while (haystack[i] != 0)
	{
		while (needle[a] != 0)
		{
			if (needle[a] == haystack[i])
			{
				a++;
				break;
			}
			else
				break;
		}
		if (a == len)
		{
			result = haystack + i - a + 1;
			break;
		}
		i++;
	}
	return (result);
}
