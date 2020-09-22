#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
* _islower - function that checks for lowercase character
* @c: character to check
*
* Return: 1 if c is lowercase & 0 otherwise
*/

int _islower(int c)
{
	int result;

	if (c > 'a' && c < 'z')
		result = 1;
	else
		result = 0;

	return (result);
}
