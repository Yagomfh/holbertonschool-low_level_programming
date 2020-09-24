#include "holberton.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @c: char to check
*
* Return: 1 if c is a digit & 0 otherwise
*/

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;
	return (result);
}
