#include "holberton.h"
/**
* _strlen - the length of a string
* @s: the string
*
* Return: the lenght of the string
*/

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed
 * @av: the arguments
 * Return: always 0
 */

int main(int ac, char **av)
{
	int fd1, fd2, re, wr, c1, c2;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_toi\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	fd1 = open(av[1], O_RDONLY);
	re = read(fd1, buf, 1024);
	if (fd1 == -1 || re == -1)
	{
		dprintf(STDOUT_FILENO, "Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (_strlen(buf))
		wr = write(fd2, buf, _strlen(buf));
	if (fd2 == -1 || wr == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd%d\n", c1);
	else if (c2 == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd%d\n", c2);
	if (c1 == -1 || c2 == -1)
		exit(100);
	free(buf);
	return (0);
}
