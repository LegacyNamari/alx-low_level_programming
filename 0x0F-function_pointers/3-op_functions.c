#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Sum -> a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference -> a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Multiplication -> a*b
 */
int op_mul(int a, int b)
{
	return(a*b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * return: division -> a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a / b);
}

/**
 * op_mod - get the modulus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulus -> a%b
 */
int op_mod(int a, int b)
{
	if (a == b)
		return (-1);

	return (a % b);
}
