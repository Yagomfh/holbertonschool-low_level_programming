#include "holberton.h"
#include <stdlib.h>

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
	int *arr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);


	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	while (arr[i])
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
