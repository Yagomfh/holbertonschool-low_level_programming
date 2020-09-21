#include <stdio.h>
#include "holberton.h"

/*
*
* Fuction that prints alphabet in lowercase 10 times
*
*/

void print_alphabet_x10(void)
{
	int i;
	char word;

	for (i = 0; i < 10; i++)
	{
		for (word = 'a'; word <= 'z'; word++)
		{
			_putchar(word);
		}
		_putchar('\n');
	}
}
