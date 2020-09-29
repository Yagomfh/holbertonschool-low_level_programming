#include "holberton.h"

/**
* swap_int - swaps the values of two integers
* @a: first int
* @b: second int
*
* Return: 0 when it works
*/

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
