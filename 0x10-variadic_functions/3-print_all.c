#include "variadic_functions.h"

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
	unsigned int i, j;
	va_list valist;

	format_t typs[] = {{"c", char_t},
		{"i", int_t},
		{"f", float_t},
		{"s", char_pt},
		{NULL, NULL}};

	va_start(valist, format);

	j = 0;
	while (format[j])
	{
		i = 0;
		while (i < 5)
		{
			if (format[j] == *(typs[i].str))
			{
				typs[i].f(valist);
			}
			i++;
		}
		if (format[j + 1] != '\0' && (format[j] == 'c' ||
					format[j] == 'i' ||
					format[j] == 's'))
			printf(", ");
		j++;
	}
	printf("\n");

	va_end(valist);
}
