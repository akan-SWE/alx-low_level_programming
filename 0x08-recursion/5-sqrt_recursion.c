#include "main.h"

int sqrt_helper(int n, int guess);

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

	/* 0 and 1 are sqrt of themselves */
	if (n == 0 || n == 1)
		return (n);

	/* calling the square root helper function */
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - a helper function to get the square root of the number
 *
 * @n: the number
 * @guess: the guess of the square root
 *
 * Return: guess (square root) if it a natural square root, -1 otherwise
 * and recursively call the helper function, to check for other cases
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		/* found the square root so return */
		return (guess);
	if (guess * guess > n)
		/* not a natural square root, so return -1 */
		return (-1);
	return (sqrt_helper(n, guess + 1)); /* check for other cases */
}
