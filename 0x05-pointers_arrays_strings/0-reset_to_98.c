#include "holberton.h"

/**
* reset_to_98 - takes a pointer to an int as parameter
* and updates the value it points to to 98
* @n: value toi point to
*
* Return: 0 if it works
*/

void reset_to_98(int *n)
{
	int *p = n;
	*p = 98;
}
