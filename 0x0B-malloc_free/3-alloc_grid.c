#include "holberton.h"
#include <stdlib.h>

/**
  * alloc_grid - creates a 2 dimensional array of integers
  * @width: width of the array
  * @height: height of the array
  *
  * Return: NULL on failure & if width or height <= 0,
  * a grid initialized at 0 otherwise
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = (int **)malloc((width + 1) * sizeof(int *));

	if (ar == 0)
		return (NULL);
	for (i = 0; i < width; i++)
		ar[i] = (int *)malloc((height + 1) * sizeof(int));
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ar[i][j] = 0;
	return (ar);
}