#include "main.h"

/**
 * _strcpy - copies the string pointed by src,
 * including the terminating null to dest
 *
 * @dest: buffer to which the string is copied to
 * @src: the string
 *
 * Return: store
 */

char *_strcpy(char *dest, char *src)
{
	char *store;

	/* store now stores the same memory block in dest */
	store = dest;

	/* putting each element of src inside dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* including the terminating null to dest */
	*dest = '\0';
	return (store);
}
