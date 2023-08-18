#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from '0' to '14'
 *
 * Return: void
 */

void more_numbers(void)
{

	int repeat, number;

	for (repeat = 1; repeat <= 10; repeat++)
	{
		for (number = 0; number <= 14; number++)
		{

			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
