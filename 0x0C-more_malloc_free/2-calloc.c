#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: number of bytes to fill with char b
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n; n--)
		*p++ = b;

	return (s);
}

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: number of elements
  * @size: size in bytes of nmemb
  *
  * Return: NULL if nmemb or size = 0, if fail
  * or a pointer to the allocated mem
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr; 
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);


	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, size * nmemb)
	return (arr);
}
