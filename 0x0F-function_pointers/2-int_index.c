#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: The array
 * @size: Size of the array
 * @cmp: The function pointer
 *
 * Return:
 * - The index when @cmp returns 1, otherwise
 * - -1 if cmp or array == NULL, or size is less than or equals to 0
 * - -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* Returns the index at which the cmp function returns 1 */
		if (cmp(array[i]))
			return (i);
	}

	return (-1); /* No match found */
}
