#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string to be scanned
* @accept: string containing the
* characters to match
*
* Return: the number of characters matching
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	unsigned int i = 0;
	unsigned int a;

	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		a = 0;
		while (accept[a] != 0)
		{
			if (s[i] == accept[a])
				result++;
			a++;
		}
		i++;
	}
	return (result);
}
