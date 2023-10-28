#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index
 *
 * @n: The number
 * @index: The index
 *
 * Return: The value of a bit at a given index, -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	u_int shift;

	/* Index out of bonds */
	if (index > sizeof(n) * 8)
		return (-1);

	shift = 1 << index;

	return (((n & shift) > 0) ? 1 : 0);
}
