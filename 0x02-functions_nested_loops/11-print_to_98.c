#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - function that prints all natural numbers from n to 98
* @n: the int
*
* Return: natural numbers from n to 98
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	}		
	if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	}
	if (n == 98)
	{
		printf("98\n");
	}
}
