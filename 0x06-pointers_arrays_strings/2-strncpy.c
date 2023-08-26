#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncpy - copy n number of character from source to dest
 *
 * @dest: destination
 * @src: source
 * @n: number of character to copy
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, dest_length, src_length;

	/*get their length*/
	src_length = strlen(src);
	dest_length = strlen(dest);

	/*let n equals length of source if it greater dest*/
	if (n > dest_length)
		n = src_length;

	/*replace each string of dest with src, until it reaches null*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/*add null to the remaining index if i is equal to src length*/
	if (i == src_length)
	{
		for (; i < n; i++)
			dest[i] = '\0';
	}
	else
		dest[dest_length] = '\0'; /*else just add null to dest*/

	return (dest);
}
