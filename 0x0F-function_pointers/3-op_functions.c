#include "3-calc.h"


/**
 * op_add - add to integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Their sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Their difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Their product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

