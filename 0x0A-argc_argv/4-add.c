#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument values
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int result = 0, i = 1;

	while (i < argc)
	{
		if (isalpha(*argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
