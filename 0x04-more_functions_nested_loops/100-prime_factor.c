#include <stdio.h>

/**
* main - largest prime factor of the number 612852475143
*
* Return: 0 when it works
*/

int main(void)
{
	unsigned long num, maxFactor, div;

	num = 612852475143;
	div = 2;

	while (num != 1)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			maxFactor = num;
			num = num / div;
		}
	}
	printf("%lu\n", maxFactor);
	return (0);
}
