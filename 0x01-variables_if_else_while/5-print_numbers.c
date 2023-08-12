#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Descriptoin: prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		printf("%d", base10);
	}
	putchar('\n');
	return (0);
}
