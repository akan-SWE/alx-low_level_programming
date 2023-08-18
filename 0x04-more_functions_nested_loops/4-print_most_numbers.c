#include "main.h"

/**
 * print_most_numbers - prints the numbers, from '0' to '9', except '2' and '4'
 *
 * Return: void
 */

void print_most_numbers(void)
{
	short number = 0;

	while (number <= 9)
	{

		if (number == 2 || number == 4)
		{
			number++;
			continue;
		}
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
