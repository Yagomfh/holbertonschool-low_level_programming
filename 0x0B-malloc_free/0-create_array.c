#include "holberton.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars,
  * and initializes it with a specific char
  * @size: size of array
  * @c: char to init array
  *
  * Return: NULL if size = 0 or fails or pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;
	ar = malloc(size);

	if (size == 0 || ar == 0)
		return('\0');
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
