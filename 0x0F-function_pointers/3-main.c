#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - performs simple operations
  * @argc: # of inputs
  * @argv: indiv inputs
  *
  * Return: void
  */

int main(int argc, char *argv[])
{
	int dig1, dig2, result;
	int (*calf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	dig1 = atoi(argv[1]);
	dig2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("Operator: %c\n", *(argv[2]));
	calf = get_op_func(argv[2]);
	if (calf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calf(dig1, dig2);
	printf("%d\n", result);
	return (0);
}
