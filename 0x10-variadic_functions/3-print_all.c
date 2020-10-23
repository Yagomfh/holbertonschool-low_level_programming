#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void 
 */

void print_all(const char * const format, ...)
{
	int i;
	char *tmp;
	char *space = "";

	va_list valist;
	va_start(valist, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(valist, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(valist, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(valist, double));
				break;
			case 's':
				tmp = va_arg(valist, char*);
				if (tmp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", space, tmp);
				break;
		}
		space = "";
		if (format[i + 1])
			space = ", ";
		i++;
	}
	printf("\n");
	va_end(valist);
}
