#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase from 'a' to 'z'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		_putchar(lowerCase);

		lowerCase++;
	}
	_putchar('\n');
}
