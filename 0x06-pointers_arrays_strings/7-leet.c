#include "holberton.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Return: string encoded
*/

char *leet(char *s)
{
	int i = 0;
	int c;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (s[i] != 0)
	{
		for (c = 0; a[c] != 0; c++)
		{
			if (s[i] == a[c])
			{
				s[i] = b[c];
				break;
			}
		}
		i++;
	}
	return (s);
}
