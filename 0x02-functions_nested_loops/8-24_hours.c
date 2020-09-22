#include <stdio.h>
#include "holberton.h"

/**
* jack_bauer - function that prints every minute of the day
*
* Return: 0 is it works
*/

void jack_bauer(void)
{
	int min = 0;
	int hours = 0;

	while (hours < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
