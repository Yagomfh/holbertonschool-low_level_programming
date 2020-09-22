#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* int _abs - function that computes the absolute value of an integer
* @n: the integer to calculate
*
* Return: absolute value of an integer
*/

int _abs(int n)
{
	int result;

	if (n > 0)
		result = n
	else
		result = -1 * n

	return (result);
}
