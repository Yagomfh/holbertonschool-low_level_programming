#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: NULL if fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	if (name != NULL)
		my_dog->name = name;
	else
	{
		return (NULL);
		free(my_dog->name);
	}
	if (owner != NULL)
		my_dog->owner = owner;
	else
	{
		return (NULL);
		free(my_dog->owner);
	}
	my_dog->age = age;
	return (my_dog);
}
