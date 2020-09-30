#include "holberton.h"
#include <stdio.h>

/**
* _atoi - convert a string to an integer
*
* @s: string to converti
*
* Return: the int
*/

int _atoi(char *s)
{
	int i = 0;
	int a;
	int sign = 1;
	int lenint = 0;
	int result = 0;
	unsigned int bign = 1;

	while ((s[i] < '0') || (s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -1 * sign;
		}
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		lenint = lenint + 1;
		i++;
	}
	for (a = 1; a < lenint; a++)
	{
		bign = bign * 10;
	}
	for (a = i - lenint; a <= i; a++)
	{
		result = result + ((s[a] - 48) * bign);
		bign = bign / 10;
	}
	if (sign < 0)
	{
		result = -1 * result;
	}
	return (result);
}
