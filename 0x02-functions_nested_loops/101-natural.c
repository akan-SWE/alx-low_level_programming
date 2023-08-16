#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: output the sum
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	sum_of_naturalNumber();

	return (0);
}

/**
 * sum_of_naturalNumber - print the sum of natural number below 1024
 *
 * Return: void
 */
void sum_of_naturalNumber(void)
{

	int naturalNumber = 0, sum, limit, count;

	limit = 1024;
	for (count = 1; count < limit; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			naturalNumber = count;
			sum += naturalNumber;
		}
	}
	printf("%d\n", sum);
}
