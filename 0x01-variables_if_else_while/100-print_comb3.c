#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 0;
	while (a < 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a + b != 18)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
