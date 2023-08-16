#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 'a' to 'z' 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{

	int i = 0;
	char lowerCase;

	while (i < 10)
	{
		lowerCase = 'a';
		while (lowerCase <= 'z')
		{

			_putchar(lowerCase);
			lowerCase++;
		}
		_putchar('\n');
		i++;
	}
}
