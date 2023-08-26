#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two string
 *
 * @dest: first string
 * @src: second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length, i;

	/*get the length of dest and terminating the null byte*/
	dest_length = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		/* concatenate each index after the last index of dest*/
		dest[dest_length + i] = src[i];
	}

	dest[dest_length + i] = '\0';
	return (dest);
}
