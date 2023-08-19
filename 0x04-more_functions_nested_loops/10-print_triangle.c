#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, end2 = 0, end1 = 1, k;
	int carry = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{

			if (i == size)
			{
				carry = 1;
			}
			for (j = (carry + size) - i; j >= end1; j--)
			{
				if (j == 1 && i == size)
				{
				}
				else
				{
					printf(" ");
				}
				if (j == end1)
				{
					for (k = 0; k <= end2; k++)
					{

						printf("#");
					}
					if (k >= end2)
					{
						break;
					}
				}
			}
			end2++;
			printf("\n");
		}
	}
	else
		_putchar('\n');
}
