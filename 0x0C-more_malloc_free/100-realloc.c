#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _memcpy - copies memory area
* @dest: destination
* @src: source
* @n: number of bytes to copy
*
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
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
		_memcpy(new, ptr, old_size);
		free(ptr);
	}
	return (new);
}
