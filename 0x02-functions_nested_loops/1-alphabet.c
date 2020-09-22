#include <stdio.h>
#include "holberton.h"

/**
* print_alphabet - Fuction that prints alphabet in lowercase
*
* Return: 0 when it works
*/

void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		_putchar(word);
	}
	 _putchar('\n');
}
