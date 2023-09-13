#include "3-calc.h"

/**
 * op_add - function to add twointegers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to substact two integers
 * @a: The first integer
 * @b: the second integer
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide two integers
 * @a: The first integer
 * @b: the second integer
 *
 * Return: The result of a divide by b
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
 * op_mod - Function to calculate the modulo of two integes.
 * @a: The first integer
 * @b: the second integer
 *
 * Return: The reminder of a divided by b
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
