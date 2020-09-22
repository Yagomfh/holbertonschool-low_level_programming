#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
* _isalpha - function that checks for alphabetic character
* @c: char to check
*
* Return: 1 if c is a letter, lowercase or uppercase & 0 otherwise
*/

int _isalpha(int c)
{
	int result;
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		result = 1;
	else
		result = 0;

	return (result);
}
