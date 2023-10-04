#include "main.h"

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
	unsigned int i;
	char *pArray = NULL;

	if (size == 0)
		return (NULL);

	pArray = malloc(size * sizeof(char));

	/* Memory allocation failed */
	if (pArray == NULL)
		return (NULL);

	i = 0;
	while (i < size)
		pArray[i++] = c;

	return (pArray);
}

