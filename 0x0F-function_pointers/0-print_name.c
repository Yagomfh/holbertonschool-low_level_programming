#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: name to print
  * @f: function to callback
  *
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0')
		f(name);
	else
		return;
}
