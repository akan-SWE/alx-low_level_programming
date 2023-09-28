#include "main.h"

/**
 * is_prime_number - Calls the prime_helper to check for a prime number
 *
 * @n: The number to check for primality.
 *
 * Return: 0 if the number is less than 1, otherwise return prime_helper
 */
int is_prime_number(int n)
{
	/* base case */
	if (n <= 1)
		return (0);

	/* call the prime_helper function */
	return (prime_helper(n, 1));
}

/**
 * prime_helper - a helper function
 * to check for a prime number recursively
 *
 * @n: The number to check for primality
 * @count: Used to check if the number is a prime
 *
 * Return: 1, if it a prime and 0 otherwise
 */
int prime_helper(int n, int count)
{

	/* is prime */
	if (count == n || count * count > n)
		return (1);

	/* not a prime */
	if (count * count == n)
	{
		return (0);
	}
	else if ((n % count == 0) && (count > 1))
	{
		return (0);
	}

	/* No case matched so recursively call the function */
	return (prime_helper(n, count + 1));
}

