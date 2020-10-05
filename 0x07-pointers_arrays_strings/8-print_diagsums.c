#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
* print_diagsums - sum of the two diagonals
* of a square matrix of integers
* @a: the matrix to scan
* @size: size of the matrix
*
* Return: always 0
*/

void print_diagsums(int *a, int size)
{
	int result_ld = 0;
	int result_rd = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		result_ld = result_ld + *(a + i * (size + 1));
		result_rd = result_rd + *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", result_ld, result_rd);
}
