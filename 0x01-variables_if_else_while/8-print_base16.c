#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexaDecimal = 0;

	while (hexaDecimal < 16)
	{
		if (hexaDecimal < 10)
		{
			putchar('0' + hexaDecimal);
		}
		else
		{
			putchar('a' + hexaDecimal - 10);
		}

		hexaDecimal++;
	}

	putchar('\n');
	return (0);
}
