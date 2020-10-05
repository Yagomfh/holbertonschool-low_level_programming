#include "holberton.h"

/**
* set_string - sets the value of a pointer to a char
* @s: pointer of pointer
* @to: a string
*
* Return: 0 when it works
*/

void set_string(char **s, char *to)
{
	*s = to;
}
