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
	int result = 0, i = 1, a;

	while (i < argc)
	{
		for (a = 0; argv[i][a]; a++)
		{
			if (argv[i][a] < '0' || argv[i][a] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
