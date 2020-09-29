#include "holberton.h"
#include <stdio.h>

/**
* _strlen - the length of a string
* @str: the string
*
* Return: the lenght of the string
*/

int _strlen(char *str)
{
	int result = 0;

	while (str[result] != '\0')
	{
		result++;
	}
	return (result);
}

/**
* *_strcpy - copies string src to buffer pointed by dest
* @dest: destination
* @src: string to send
*
* Return: the string sent
*/

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src) - 1;
	int i;

	dest[len + 1] = '\0';
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
