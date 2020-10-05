#include "holberton.h"

/**
* print_chessboard - prints the chessboard
* @a: the borad to print
*
* Return: 0 when it works
*/

void print_chessboard(char (*a)[8])
{
	int i, c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[i][c]);
		}
		_putchar('\n');
	}
}
