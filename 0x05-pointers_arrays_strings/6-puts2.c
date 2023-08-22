#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string param
 *
 * Return: void (Nothing)
 */

void puts2(char *str)
{
	int length, index;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	index = 0;
	while (index < length)
	{

		_putchar(*(str + index));
		index += 2;
	}
	_putchar('\n');
}
