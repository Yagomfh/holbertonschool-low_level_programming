#include "holberton.h"

/**
* prime_check - check if b prime number starting at a
* @a: digit to test first
* @b: number to check
*
* Return: 1 if prime & 0 otherwise
*/

int prime_check(int a, int b)
{
	if (a == b)
		return (1);
	if (b % a == 0)
		return (0);
	return (prime_check(a + 1, b));
}

/**
* is_prime_number - chack if input is prime num
* @n: number to check
*
* Return: 1 if prime & 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(2, n));
}
