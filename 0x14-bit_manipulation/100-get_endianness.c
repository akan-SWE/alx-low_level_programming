#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 1 if it a little endian, and 0 if it a big endian
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(unsigned char *)&num == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
