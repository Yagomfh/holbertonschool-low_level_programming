#include "holberton.h"
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: string to reverse
*
* Return: 0 when it work
*/

void rev_string(char *s)
{

	int len = 0;
	int i = 0;
        char *s2 = s;

        while (*s != 0)
        {
                len++;
                s++;
        }
        while (len >= 0)
        {
                *(s + i) = *(s2 + len);;
                len--;
		s++;
		i++;
        }
}
