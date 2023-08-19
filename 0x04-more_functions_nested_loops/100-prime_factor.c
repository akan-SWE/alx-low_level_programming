#include "main.h"
#include <stdio.h>

int largest_prime_factor(long int number);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int get;

	get = largest_prime_factor(612852475143);
	printf("%d\n", get);
	return (0);
}

/**
 * largest_prime_factor - print the largest prime factor of the number
 *
 * @number: number
 *
 * Return: void
 */
int largest_prime_factor(long int number)
{

	int i, largestFactor;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}
	for (i = 3; i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largestFactor = number;
		printf("%ld\n", number);
	}
	return (largestFactor);
}
