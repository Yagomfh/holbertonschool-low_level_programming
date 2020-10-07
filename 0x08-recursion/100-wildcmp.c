#include "holberton.h"

/**
* wildcmp - compares two strings
* @s1: main str
* @s2: compared to s1
*
* Return: 1 if considered identical, otherwise 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	return (0);
}
