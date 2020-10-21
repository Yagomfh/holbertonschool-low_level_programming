#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array
  * @array: array to treat
  * @size: size of the array
  * @action: function to call
  *
  * Return: void
  */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
