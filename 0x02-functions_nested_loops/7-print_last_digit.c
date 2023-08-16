#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @number: the number is passed to the function to get the last digit
 *
 * Return: lastDigit
 */
int print_last_digit(int number)
{

	int lastDigit;

	lastDigit = number % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
