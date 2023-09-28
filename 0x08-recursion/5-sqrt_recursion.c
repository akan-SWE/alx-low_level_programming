#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root
 * of a number recursively.
 *
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of the number if it exits, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	/* base case */
	if (n < 0)
		return (-1);

	/* 0 and 1 are square root of themselves */
	if (n == 0 || n == 1)
		return (n);

	/* Call the helper function */
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - a helper function
 * to get the square root of the number
 *
 * @n: the number
 * @sqrt: the guess of the square root
 *
 * Return: guess (square root) if it a natural square root
 * -1 otherwise
 */
int sqrt_helper(int n, int sqrt)
{

	/* Square root is found */
	if ((sqrt * sqrt) == n)
		return (sqrt);

	/* Number does not have a square root */
	if ((sqrt * sqrt) > n)
		return (-1);

	/* No case is matched so call again */
	return (sqrt_helper(n, sqrt + 1));
}
