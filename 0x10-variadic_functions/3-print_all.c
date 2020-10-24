#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * char_t - print char
 * @a: char to print
 *
 * Return: void
 */

void char_t(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * int_t - print int
 * @a: int to print
 *
 * Return: void
 */

void int_t(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * float_t - print float
 * @a: float to print
 *
 * Return: void
 */

void float_t(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * char_pt - print string
 * @a: string to print
 *
 * Return: void
 */

void char_pt(va_list a)
{
	char *tmp = va_arg(a, char*);

	if (tmp == NULL)
	{
		tmp = "(nil)";
	}
	printf("%s", tmp);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j = 0;
	char *space;
	va_list valist;
	format_t typs[] = {
		{"c", char_t},
		{"i", int_t},
		{"f", float_t},
		{"s", char_pt},
		{NULL, NULL}
	};

	va_start(valist, format);

	while (format && format[j])
	{
		space = "";
		if (format[j + 1])
			space = ", ";
		i = 0;
		while (i < 4)
		{
			if (format[j] == *(typs[i].str))
			{
				typs[i].f(valist);
				printf("%s", space);
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(valist);
}
