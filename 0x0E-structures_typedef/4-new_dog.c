#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* _strlen - the length of a string
* @s: the string
*
* Return: the lenght of the string
*/

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

/**
  * _strdup - allocates space in memory containing a string
  * @str: string to copy
  *
  * Return: pointer to allocated space
  */

char *_strdup(char *str)
{
	char *ar;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	ar = malloc(len + 1 * sizeof(char));

	if (ar == 0)
		return (NULL);
	for (i = 0; i < len; i++)
		ar[i] = str[i];
	str[i] = '\0';
	return (ar);
}

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
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;
	return (new);
}
