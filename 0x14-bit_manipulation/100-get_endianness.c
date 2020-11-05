#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *check = (char*)&i;

	if (*check)
		return (1);
	return (0);
}
