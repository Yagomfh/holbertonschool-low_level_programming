#include "holberton.h"

/**
* pow_test - check what is the power of b starting at a
* @a: initial value to check
* @y: int to find square root of
*
* Return: -1 if a is decimal
*/

int pow_test(int a, int b)
{
	if (a * a > b)
		return (-1);
	if (a * a == b)
		return (a);
	return (pow_test(a + 1, b));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to check
*
* Return: -1 if not natural sr & result otherwise
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (pow_test(1, n));
}
