#include "holberton.h"

/**
 * main - displays the information contained in the ELF header
 * @ac: number of arguments passed
 * @av: the arguments
 * Return: always 0
 */

int main(int ac, char **av)
{
	if (ac != 2)
		exit (98);
	if (av[2] == NULL)
		exit (98);
	return (0);
}
