#include "holberton.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: an int
* @y: raised to the power of this int
*
* Return: -1 if y < 0 and the result otherwise
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
