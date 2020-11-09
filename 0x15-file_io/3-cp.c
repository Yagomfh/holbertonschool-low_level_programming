#include "holberton.h"

/**
 * exit98 - ile_from does not exist, or can't be read
 * @f: file name
 * Return: void
 */

void exit98(char *f)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
	exit(98);
}

/**
 * exit99 - write to file_to fails
 * @f: file name
 * Return: void
 */

void exit99(char *f)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
	exit(99);
}

/**
 * exit100 - can not close a file descriptor error
 * @fd: value of the file descriptor
 * Return: void
 */

void exit100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
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
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		exit98(av[1]);

	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		exit99(av[2]);

	re = read(fd1, buf, sizeof(buf));
	if (re == -1)
		exit98(av[1]);
	wr = write(fd2, buf, re);
	if (wr == -1)
		exit99(av[2]);
	c1 = close(fd1);
	if (c1 == -1)
		exit100(c1);
	c2 = close(fd2);
	if (c2 == -1)
		exit100(c2);
	return (0);
}
