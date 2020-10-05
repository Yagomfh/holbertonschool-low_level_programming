#include "holberton.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to be scanned
* @accept: characters to scan
*
* Return: pointer to s that matches the scanned chars
* & NULL if nothing matched
*/

char *_strpbrk(char *s, char *accept)
{
	char *result = 0;
	int i = 0;
	int a;

	while (s[i] != 0)
	{
		a = 0;
		while (accept[a] != 0)
		{
			if (accept[a] == s[i])
			{
				result = s + i;
				break;
			}
			a++;
		}
		if (accept[a] == s[i])
			break;
		i++;
	}
	return (result);
}
