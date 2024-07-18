#include "search_algos.h"


int _binary_search(int *, size_t, size_t, int);

#define MIN(x, y) ((x) < (y) ? (x) : (y))

/**
 * exponential_search - searches for a value in a sorted array using the
 * exponential search algorithm
 *
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where the value is found, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t end, start, found_index = -1, i = 0;

	if (!array || !size)
		return (found_index);

	if (array[i] == value)
		found_index = i;
	else
	{
		/* find block exponentially */
		i++;
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}

		start = i / 2;
		end = MIN(i, size - 1);

		printf("Value found between indexes [%lu] and [%lu]\n", start, end);
		/* search through those blocks for the value using binary seach */
		found_index = _binary_search(array, start, end, value);
	}

	return (found_index);
}

/**
 * _binary_search - Searches for a value in an array of integers using the
 * binary search algorithm
 *
 * @array: The array to search through
 * @start: The start of the block in the array
 * @end: The end of the block in the array
 * @value: The value to find
 *
 * Return: The first index where the @value is located otherwise -1
 */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t found_index = -1;

	while (start <= end)
	{
		size_t middle = (start + end) / 2;

		print_array(array, start, end);

		if (array[middle] == value)
		{
			found_index = middle;
			break;
		}
		else if (array[middle] > value)
			end = middle - 1;
		else
			start = middle + 1;
	}

	return (found_index);
}

/**
 * print_array - Displays the array
 *
 * @array: The array
 * @start: Start of the array
 * @end: End of the array
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);

		if (start != end)
			printf(", ");
	}
	putchar('\n');
}
