#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: amount of bytes to allocate
 *
 * Return: A pointer to the address or exit status of 98
 * if the allocation fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

