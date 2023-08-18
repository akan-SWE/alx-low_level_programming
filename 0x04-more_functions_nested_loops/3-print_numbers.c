#include "main.h"
/**
 * print_numbers - prints the numbers, from '0' to '9'
 *
 * Return: void
 */

void print_numbers(void)
{

	int number = 0;

	for (; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
