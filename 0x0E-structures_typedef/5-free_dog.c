#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees dogs
  * @d: struct to free
  *
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d != '\0')
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
