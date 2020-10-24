#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void, nothing if separator = NUlL,
 * (nil) if one of the string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list valist;

	va_start(valist, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(valist, char*);
		if (tmp == NULL)
			printf("(nil)");
		printf("%s", tmp);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
