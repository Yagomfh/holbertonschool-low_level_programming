#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - adds two digits together
  * @a: first digit
  * @b: second digit
  *
  * Return: result of a+b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substracts two digits together
  * @a: first digit
  * @b: second digit
  *
  * Return: result of a-b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two digits together
  * @a: first digit
  * @b: second digit
  *
  * Return: result of a*b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two digits together
  * @a: first digit
  * @b: second digit
  *
  * Return: result of a/b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - modulo of two digits
  * @a: first digit
  * @b: second digit
  *
  * Return: result of a%b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
