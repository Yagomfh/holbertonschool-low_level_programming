#include "holberton.h"

/**
* print_square - prints a square
* @size: size of the square
*
* Return: 0 when it works
*/

void print_square(int size)
{
	int w, h;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
