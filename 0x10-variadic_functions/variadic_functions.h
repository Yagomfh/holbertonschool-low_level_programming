#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct types_arg - type structure
 * @str: str input
 * @f: function to call
 *
 * Description: type to call
 */

typedef struct types_arg
{
	char *str;
	void (*f)(va_list a);
} a_types;

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);

#endif
