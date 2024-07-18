#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using the
 * interpolation search algorithm
 *
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where the value is found, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, pos, found_index = -1;

	if (!array || !size)
		return (found_index);

	/* Tendency of iterating if it not properly uniformely gapped */
	while (start <= end)
	{
		/* Get position */
		pos = start + (((double)(end - start) /
						(array[end] - array[start])) * (value - array[start]));

		if (pos <= size - 1) /* position is within range */
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else /* position is out of range */
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)   /* value found */
		{
			found_index = pos;
			break;
		}

		if (pos < start || pos > end) /* value not in array */
			break;
		else if (array[pos] > value) /* value is less than item at pos */
			end = pos - 1;
		else if (array[pos] < value) /* value is greater than item at pos */
			start = pos + 1;
	}

	return (found_index);
}
