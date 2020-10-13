#include "holberton.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously created
  * @grid: grid to free
  * @height: height of grid
  *
  * Return: always 0
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
