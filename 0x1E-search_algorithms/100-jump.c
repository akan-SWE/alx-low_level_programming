#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array using the
 * jump search algorithm
 *
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where the value is found, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, back, front, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	back = 0;
	front = 0;

	/* find block */
	while (front < size && array[front] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", front, array[front]);
		back = front;
		front += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", back, front);

	for (i = back; i < size && i <= front; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
