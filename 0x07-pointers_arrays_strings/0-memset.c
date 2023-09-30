#include "main.h"

/**
 * _memset - fill memory with a constant character
 *
 * @s: destination string
 * @b: the character to fill with
 * @n: number of blocks to fill
 *
 * Return: a pointer of the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;


	return (s);
}

