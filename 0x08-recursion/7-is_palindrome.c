#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @str: string to scan
*
* Return: the lenght of the string
*/

int _strlen_recursion(char *str)
{
	if (*str != 0)
		return (1 + _strlen_recursion(str + 1));
	return (0);
}

int check_pal(int a, int b, char *y)
{
	if (y[a] != y[b])
		return (0);
	if (a > b)
		return (1);
	return(check_pal(a + 1, b - 1, y));
}

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;
	
	if (*s == 0)
		return(1);
	return (check_pal(0, len, s));
}
