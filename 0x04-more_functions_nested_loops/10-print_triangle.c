#include "holberton.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
*
* Return: 0 when it works
*/

void print_triangle(int size)
{
	int w, i;

	if (size > 0)
	{
		for (w = 1; w <= size; w++)
		{
			for (i = 1; i <= size - w; i++)
				_putchar(' ');
			for (i = 1; i <= w; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
