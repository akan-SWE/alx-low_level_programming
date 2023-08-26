#include "main.h"

/**
 * _strncat - concatenate n number of character
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: length of character to concatenate
 * Return: destination pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_length, i;
	/*getting param length*/
	dest_length = strlen(dest);
	src_length = strlen(src);
	/*set n equals to length of src if it greater that src*/
	if (n > src_length)
		n = src_length;
	/*using the specified n to concatenate the element to dest*/
	for (i = 0; i < n; i++)
		dest[dest_length + i] = src[i];

	dest[dest_length + i] = '\0'; /*adding back the null character*/

	return (dest);
}
