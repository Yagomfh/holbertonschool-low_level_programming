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

	ar = malloc(width * sizeof(int *));

	if (ar == 0)
		return (NULL);
	for (i = 0; i < width ; i++)
	{
		ar[i] = malloc(height * sizeof(int));
		if (ar[i] == 0)
		{
			free(ar[i]);
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ar[i][j] = 0;
	return (ar);
}
