#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: input integer
 * @b: input integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - differnce of two numbers
 * @a: input integer
 * @b: input integer
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: input integer
 * @b: input integer
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divisor of tow numbers
 * @a: input integer
 * @b: inut integer
 *
 * Return: divisor
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: input integer
 * @b: input integer
 *
 * Return: moduluts
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
