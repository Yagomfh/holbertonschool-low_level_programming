#include "holberton.h"

/**
* factorial - returns the factorial of a given number
* @n: int factorial of
*
* Return: -1 if n < 0 & the factorial result otherwise
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
