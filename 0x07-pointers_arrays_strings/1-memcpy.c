#include "main.h"

/**
 * _memcpy - copy memory area;
 *
 * @dest: destination string to copy to
 * @src: string to be copied to destination string
 * @n: number of characters to copy
 *
 * Return: a pointer, dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*copy src into dest*/
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

