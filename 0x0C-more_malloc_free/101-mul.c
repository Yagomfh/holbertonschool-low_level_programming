#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - the length of a string
* @s: the string
*
* Return: the lenght of the string
*/

int _strlen(char *s)
{
	int result = 0;

	if (s == NULL)
		return (0);

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

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

	ar = malloc(height * sizeof(int *));

	if (ar == 0)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(ar[j]);
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	return (ar);
}

/**
  * main - multiplies two digits
  * @argc: number of inputs
  * @argv: input value
  *
  * Return: the result
  */

int main(int argc, char *argv[])
{
	int len_d1, ret, len_d2, longest, l, c, a;
	int **matrix;

	if (argc != 3 || argv[1] == NULL || argv[2] == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	len_d1 = _strlen(argv[1]) - 1;
	len_d2 = _strlen(argv[2]) - 1;
	longest = len_d1 + 1;
	if (len_d2 > len_d1)
		longest = len_d2 + 1;
	matrix = alloc_grid(longest * 2, longest + 1);

	l = 0;
	a = 1;
	while (len_d2 >= 0)
	{
		len_d1 = _strlen(argv[1]) - 1;
		c = longest * 2 - a;
		while (len_d1 >= 0)
		{
			matrix[l][c] = (argv[1][len_d1] - 48) * (argv[2][len_d2] - 48);
			len_d1--;
			c--;
		}
		len_d2--;
		a++;
		l++;
	}
	c = longest * 2 - 1;
	while (c >= 0)
	{
		l = 0;
		while (l < longest)
		{
			matrix[longest][c] += matrix[l][c];
			l++;
		}
		matrix[longest][c] = matrix[longest][c];
		c--;
	}
	c = longest * 2 - 1;
	ret = 0;
	while (c >= 0)
	{
		a = matrix[longest][c];
		matrix[longest][c] = (matrix[longest][c] + ret) % 10;
		ret = ((a + ret) - (a + ret) % 10) / 10;
		c--;
	}
	while (matrix[longest][a] == 0)
		a++;
	while (a <= longest * 2 - 1)
	{
		_putchar(matrix[longest][a] + '0');
		a++;
	}
	_putchar('\n');
	return (0);
}
