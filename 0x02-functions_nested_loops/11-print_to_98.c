#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - function that prints all natural numbers from n to 98
* followed by a new line
*
* Return: natural numbers from n to 98
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);

			n++;
		}
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);

				else
				printf("98\n");
			n--;
		}
	}
	if (n == 98)
	{
		printf("98\n");
	}
}
