#include "holberton.h"
#include <stdio.h>
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
  * argstostr - concatenates all the arguments of your program
  * @ac: number of args
  * @av: value of args
  *
  * Return: NULL if ac == 0 or av == NULL, pointer to a new string
  * or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	char *ar;
	int a = 0, b, c = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		len = len + _strlen(av[a]) + 1;
		a++;
	}

	len++;
	ar = malloc(len * sizeof(char));
	if (ar == 0)
		return (NULL);

	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			ar[c] = av[a][b];
			c++;
			b++;
		}
		ar[c] = '\n';
		c++;
		a++;
	}
	ar[c] = '\0';
	return (ar);
}
