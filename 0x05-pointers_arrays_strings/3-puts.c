#include "main.h"
#include <stdlib.h>

/**
 * _puts - print string to standard output
 *
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i, getLength;

	getLength = 0;
	for (i = 0; *(str + getLength) != '\0'; i++)
	{
		/* use getLength to get the value of each index of str */
		_putchar(*(str + getLength));
		getLength++;
	}
	_putchar('\n');
}
