#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
 * puts_half - prints half of a string
 *
 * @str: the string param
 *
 * Return: void (Empty)
 */

void puts_half(char *str)
{

	int length, half;
	const short divisor = 2;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	half = ((length + 1) / divisor);

	while (half < length)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
