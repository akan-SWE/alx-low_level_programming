#include "search_algos.h"

int advanced_binary_helper(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - Searches for a value in an array of integers using the
 * binary search algorithm, but returns the index of the first value in the
 * array.
 *
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: The first index where the @value is located otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (advanced_binary_helper(array, 0, size - 1, value));
}

/**
 * advanced_binary_helper -  Recursively finds the value using binary search
 * in the array.
 *
 * @array: The array to search through
 * @start: The start of the sub array
 * @end: The end of the sub array
 * @value: The value to find
 *
 * Return: The first index where the @value is located otherwise -1
 */
int advanced_binary_helper(int *array, size_t start, size_t end, int value)
{
	size_t middle;

	if (start > end)
		return (-1);

	print_array(array, start, end);

	middle = (start + end) / 2;
	if (value == array[middle])
	{
		/* end new block at middle if same value exist at the previous array */
		if ((start + end >= 1) && array[middle - 1] == value)
			end = middle;
		else  /* no duplicate found hence return */
			return (middle);
	}
	else if (value > array[middle])
		start = middle + 1;
	else
		end = middle - 1;

	return (advanced_binary_helper(array, start, end, value));
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
