#include "variadic_functions.h"

/**
 * sum_them_all - sums all numbers passed
 *
 * @n: Number of argment passed
 *
 * Return: The sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
    size_t i;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
