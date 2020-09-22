#include <stdio.h>
#include "holberton.h"

/**
* print_alphabet_x10 - prints alphabet in lowercase 10 times
*
* Return: 0 when it works
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
