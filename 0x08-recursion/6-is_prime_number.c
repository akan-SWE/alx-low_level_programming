#include "main.h"

int prime_helper(int n, int check);

/**
 * is_prime_number - passed the number to check for prime_number
 * @n: the number to be checked
 * Return: 1 if it a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}

/**
 * prime_helper - checks if the nubmer is a prime number
 * @n: the number to check
 * @check: used to check if the number are prime
 * Return: 1 if it a prime number and 0 otherwise
 */
int prime_helper(int n, int check)
{
	if (n <= 1)
		return (0);
	if (check * check > n)
		return (1);
	if (n % check == 0)
		return (0);

	return (prime_helper(n, check + 1));
}

