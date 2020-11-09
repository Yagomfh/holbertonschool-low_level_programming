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
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to treat
 * @letters: num of letters to print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int buflen;
	ssize_t writeR, readR;

	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	readR = read(fd, buf, letters);
	if (readR == -1)
	{
		free(buf);
		return (0);
	}
	buflen = _strlen(buf);
	writeR = write(STDOUT_FILENO, buf, buflen);
	if (writeR == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (writeR);
}
