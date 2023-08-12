#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: print all single digit of base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base10 = 0;

	while (base10 < 10)
	{
		putchar(base10 + '0');
		base10++;
	}
	putchar('\n');
	return (0);
}
