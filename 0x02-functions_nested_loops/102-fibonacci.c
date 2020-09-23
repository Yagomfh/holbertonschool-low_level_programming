#include <stdio.h>

/**
 * main - prints Holberton, followed by a new line
 *
 * Return: 0 when it works
 */

int main(void)
{
	long long int f0 = 1;
	long long int f1 = 2;
	long long int fn;
	int n;

	for (n = 1; n <= 50; n++)
	{
		printf("%lli", f0);
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		if (n != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
