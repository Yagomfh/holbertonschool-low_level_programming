#include "holberton.h"
#include <stdio.h>
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
  * _realloc - reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: size, in bytes, of the allocated space for ptr
  * @new_size: new size, in bytes of the new memory block
  *
  * Return: if new_size > old_size, memory should not be initialized
  * If new_size == old_size do not do anything and return ptr
  * If ptr is NULL, then the call is equivalent to malloc(new_size),
  * for all values of old_size and new_size
  * If new_size is equal to zero, and ptr is not NULL,
  * hen the call is equivalent to free(ptr). Return NULL.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new = malloc(sizeof(ptr) * new_size);
		if (new == NULL)
			return (NULL);
		_memset(new, 0, old_size);
		free(ptr);
	}
	if (new_size < old_size)
	{
		new = malloc(sizeof(ptr) * new_size);
		if (new == NULL)
			return (NULL);
		_memset(new, 0, new_size);
		free(ptr);
	}
	return (new);
}
