#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first integer pointer to swap with
 * @b: second integer pointer to swap with
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a, *a = *b, *b = c;
}
