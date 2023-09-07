#include "main.h"

/**
 * factorial - Computes the factorial of a number recursively.
 * @n: The number for which to calculate the factoirial.
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	/* base case */
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
