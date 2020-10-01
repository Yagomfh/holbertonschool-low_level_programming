#include "holberton.h"

/**
* rot13 - encodes a string using rot13
* @s: string to encode
*
* Return: the encoded string
*/

char *rot13(char *s)
{
	int i = 0;
	char *result = s;

	while (s[i] != 0)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
			result[i] = s[i];
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
			result[i] = s[i];
		}
		i++;
	}
	return (result);
}
