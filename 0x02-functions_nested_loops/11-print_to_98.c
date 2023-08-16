#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers to 98
 *
 * @n: natural number starting point
 *
 * Return: (void)
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n <= 9 && n >= 0)
				_putchar(n + '0');
			else if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (n < 0 && n >= -9)
			{
				_putchar('-');
				_putchar((n * -1) + '0');
			}

			else if (n == -10)
			{
				_putchar('-');
				_putchar((n / -10) + '0');
				_putchar((n % -10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");

			n--;
		}
	}

	putchar('\n');
}
