#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 *
 * @n: The number
 * @index: The index
 *
 * Return: 1 for success, otherwise -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	u_int shift_and_flip;

	/* Index out of bonds */
	if (index >= sizeof(*n) * 8)
		return (-1);

	/* Shift the bit to that index and flip all the bits */
	shift_and_flip = ~(1 << index);

	*n &= shift_and_flip; /* Clear the bit */

	return (1);
}
