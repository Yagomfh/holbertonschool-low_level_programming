#include "holberton.h"
#include <stdio.h>

/**
 * main - sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 when it works
 */

int main(void)
{
	int i;
	long int result = 0;

	for (i = 1; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			result = result + i;
	printf("%ld \n", result);
	return (0);
}
