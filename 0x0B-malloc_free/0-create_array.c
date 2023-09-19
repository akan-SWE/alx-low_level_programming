#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of char
 * and initialize it with a specific value
 *
 * @size: size of the array
 * @c: character to initialize to
 *
 * Return:
 *  - NULL if @size = 0
 *  - A pointer to the array
 *  - NULL if it failes
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/*size is 0, so return NULL*/
	if (size == 0)
		return (NULL);

	/*allocate a space, from the size*/
	array = (char *)malloc(sizeof(char) * size);

	/*memory allocation failed, hence return NULL*/
	if (array == NULL)
	{
		write(1, "failed to allocate memory", STRING_SIZE);
		return (NULL);
	}

	/*initialze c into every index of the array*/
	for (i = 0; i < size; i++)
		array[i] = c;

	/*return a pointer to the array*/
	return (array);
}
