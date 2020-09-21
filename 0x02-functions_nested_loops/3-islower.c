#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
* _islower - function that checks for lowercase character
*
* Return: 1 if c is lowercase & 0 otherwise
*/

int _islower(int c)
{
	int result;

	if (islower(c) > 0)
		result = 1;
	else
		result = 0;

	return (result);
}
