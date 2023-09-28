#include "main.h"
#include <stdio.h>

/**
 * factorial - Computes the factorial of a number recursivey.
 *
 * @n: The number for which to calculate the factoirial.
 *
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	/* n is not a positive number */
	if (n < 0)
		return (-1);

	/* base case */
	if (n == 0)
		return (1);
	/* tail recursive case */
	return (n * factorial(n - 1));
}
