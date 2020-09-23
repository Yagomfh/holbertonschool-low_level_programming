#include "holberton.h"
#include <stdio.h>

/**
 * main - prints Holberton, followed by a new line
 *
 * Return: 0 when it works
 */

int main(void)
{
	unsigned long result = 0;
	unsigned long f0 = 1;
	unsigned long f1 = 2;
	unsigned long fn;
	int n;

	for (n = 1; f0 <= 4000000; n++)
	{
		result = result + f0;
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	printf("%lu\n", result);
	return (0);
}
