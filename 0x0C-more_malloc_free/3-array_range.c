#include "main.h"
#include <stdlib.h>


/**
 * array_range - Creates an array of integers
 *
 * @min: The mininum value of the array
 * @max: The maximum value of the array
 *
 *
 * Return:
 * - The array
 * - NULL if min is greater than max
 * - otherwise NULL if malloc failed
 */
int *array_range(int min, int max)
{
	int i, *pArray, size;

	/* Return if min is greater than max */
	if (min > max)
		return (NULL);

	size = ((max - min) + 1);

	pArray = malloc(size * sizeof(int));

	/* Memory allocation failed */
	if (pArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(pArray + i) = (min + i);

	return (pArray);
}
