#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array of integers
 *
 * @a: integer array
 * @n: number of element
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int size, i;

	size = (n - 1);

	for (i = 0; i <= size; i++)
	{
		if (i != size)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
