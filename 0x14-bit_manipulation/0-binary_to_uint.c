#include "holberton.h"

/**
* _strlen - the length of a string
* @s: the string
*
* Return: the lenght of the string
*/

int _strlen(const char *s)
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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary num to convert
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i = 0, digit;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		digit = (b[len] - 48);
		dec += digit << i;
		i++;
		len--;
	}
	return (dec);
}
