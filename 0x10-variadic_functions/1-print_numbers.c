#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void or nothing if separator == NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
