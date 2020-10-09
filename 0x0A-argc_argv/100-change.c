#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins 
* to make change for an amount of money
* @argc: argument count
* @argv: argument values
*
* Return: 1 if more than 1 arg, 0 if arg < 0 & the amount otherwise
*/

int main(int argc, char *argv[])
{
	int change = 0, i;
	int coins[] = {25, 10, 5, 2, 1};
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents != 0)
	{
		i = 0;
		while (i <= 5)
		{
			if (cents - coins[i] >= 0)
				break;
			i++;
		}
		cents = cents - coins[i];
		change ++;
	}
	printf("%d\n", change);
	return (0);
}
