#include "holberton.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: size of bytes to allocate
  *
  * Return: pointer to the allocated memory or 98 if it fails
  */

void *malloc_checked(unsigned int b)
{
	unsigned long *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
