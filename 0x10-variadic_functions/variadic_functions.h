#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct format - type structure
 * @str: str input
 * @f: function to call
 *
 * Description: type to call
 */

typedef struct format
{
	char *str;
	void (*f)(va_list);
} format_t;

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
#endif
