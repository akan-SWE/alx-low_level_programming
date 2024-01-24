#include "main.h"

/**
 * main - Entry point
 *
 * Description: output the result
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci_To_98();
	return (0);
}
/**
 * print_fibonacci_To_98 - print the first 98 fibonnacci from 1 and 2
 *
 * Return: void
 */
void print_fibonacci_To_98(void)
{
	unsigned long a, b, c;
	const int n = 98;
	int i;

	a = 1, b = 2;
	printf("%lu, %lu, ", a, b);
	for (i = 1; i < n - 2; i++)
	{
		c = a + b;
		a = b, b = c;
		printf("%lu, ", c);
	}

	/* print the last number (98th) */
	c = a + b;
	printf("%lu, \n", c);
}
