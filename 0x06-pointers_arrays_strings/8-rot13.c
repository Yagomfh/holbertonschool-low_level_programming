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
	int c;
	char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

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

