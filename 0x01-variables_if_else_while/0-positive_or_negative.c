#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 *
 * Description: checks if the random number is positive or negative and output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
		puts("is positive");
	else if (n == 0)
		puts("is zero");
	else if (n < 0)
		puts("is negative");

	return (0);
}
