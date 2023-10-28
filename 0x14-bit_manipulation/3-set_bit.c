#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: The number
 * @index: The index
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	u_int shift;


	/* Index out of bonds */
	if (index >= sizeof(*n) * 8)
		return (-1);

	/* Shift to that index */
	shift = 1 << index;

	/* Enable the bit */
	*n |= shift;

	return (1);
}
