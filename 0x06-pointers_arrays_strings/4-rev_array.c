#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int size);
/**
 * reverse_array - reverse the value of an array
 * @a: the array to reverse
 * @n: the size
 * Return: void (nothing)
 */

void reverse_array(int *a, int n)
{
	int i, j;

	int *copy = (int *)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		copy[i] = a[i];
	}

	j = 0, n--;
	for (i = 0; n >= i; n--)
	{
		a[n] = copy[j];
		j++;
	}
	free(copy);
}
