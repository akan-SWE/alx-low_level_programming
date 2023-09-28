#include "main.h"

/**
 * _pow_recursion - Computs 'x' raised to the power of 'y' recursively.
 *
 * @x: The base Value.
 * @y: The exponent Value.
 *
 * Return: The result of 'x' raised to the power of 'y'.
 */
int _pow_recursion(int x, int y)
{
	/* Error when y is a negative number */
	if (y < 0)
		return (-1);

	/* base case */
	if (y == 0)
		return (1);

	/* tail recursive case */
	return (x * _pow_recursion(x, y - 1));
}
