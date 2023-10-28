#include "main.h"
#include <stdbool.h>

/**
 * flip_bits - Calculate the number of bits needed to flip from one number to another
 * *
 *
 * @n: The number to flip to
 * @m: The number we are checking for differences
 *
 * Return: The number of bit flips needed to get to @n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	u_int bitDifference;
	bool mask;

	bitDifference = 0;
	mask = 1;
	while (n > 0 || m > 0)
	{
		/* Go through each bits checking if there are not equal */
		if ((n & mask) != (m & mask))
			bitDifference++;

		n >>= 1;
		m >>= 1;

	}
	return (bitDifference);
}
