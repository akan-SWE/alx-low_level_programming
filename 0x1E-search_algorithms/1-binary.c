#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers using the
 * binary search algorithm
 *
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: The first index where the @value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, found_index = -1;

	while (array && start <= end)
	{
		size_t middle = (start + end) / 2;

		print_array(array, start, end);

		if (value == array[middle])
		{
			found_index = middle;
			break;
		}
		else if (value < array[middle])
			end = middle - 1;
		else if (value > array[middle])
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
