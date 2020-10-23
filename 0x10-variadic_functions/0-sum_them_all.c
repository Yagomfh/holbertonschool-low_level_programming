#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - sum of all its parameters
  * @n: number to sum
  *
  * Return: the sum or 0 if n = 0)
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list valist;

	va_start(valist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
