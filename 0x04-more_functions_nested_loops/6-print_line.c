#include "main.h"

/**
 * print_line - Draws a straight line
 *
 * @n: Ending point for the loop
 *
 * Return: void
 */

void print_line(int n)
{
	int start;

	start = 0;
	while (start < n)
	{
		_putchar('_');
		start++;
	}
	_putchar('\n');
}
