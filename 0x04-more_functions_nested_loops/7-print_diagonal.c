#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times character '\' should print
 *
 * Return: void
 */

void print_diagonal(int n)
{

	int innerCount, end, outerCount;

	end = 1;

	outerCount = 1;

	if (n > 0)
	{
		while (outerCount <= n)
		{
			innerCount = 1;
			while (innerCount <= end)
			{
				if (innerCount != end)
				{
					_putchar(' ');
					innerCount++;
				}
				else
				{
					_putchar('\\');
					innerCount++;
				}
			}
			_putchar('\n');
			end++;
			outerCount++;
		}
	}
	else
		_putchar('\n');
}
