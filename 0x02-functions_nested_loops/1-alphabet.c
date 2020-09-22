#include <stdio.h>
#include "holberton.h"

/**
*
* Fuction that prints alphabet in lowercase
*
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
