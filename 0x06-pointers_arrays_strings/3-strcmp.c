#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: 0 both string equal
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while ((s1[i] != 0) || (s2[i] != 0))
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (result);
}
