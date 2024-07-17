#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * linear search algorithm
 *
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: The first index where the @value is located otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Iterate through the array */
	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/* value found */
		if (value == array[i])
			return (i);
	}
	return (-1);
}
