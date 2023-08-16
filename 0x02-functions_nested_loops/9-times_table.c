#include "main.h"

/**
 * times_table - print the 9 times table, starting from 0
 *
 * Return: void (empty)
 */
void times_table(void)
{
	int multiplicand, multiplier, stop, product;

	multiplicand = 0, stop = 9;
	while (multiplicand <= stop)
	{
		multiplier = 0;
		while (multiplier <= 9)
		{
			/*calculate the product*/
			product = multiplicand * multiplier;

			/* Formatting the output */
			if (multiplier != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
			}

			/* print out the product */
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			multiplier++;
		}
		_putchar('\n');
		multiplicand++;
	}
}
