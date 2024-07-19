#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using
 *             the jump search algorithm.
 *
 * @list:  Pointer to the head of the sorted linked list.
 * @size:  The total number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where the value is located,
 * or NULL if the value is not found, the list is NULL, or size is 0.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size, i;
	listint_t *front, *back, *found_index = NULL;
	/* Check if the list is NULL or the size is 0 */
	if (!list || !size)
		return (found_index);
	/* Calculate the optimal jump size */
	jump_size = sqrt(size);

	i = 0;
	back = list;
	front = list;
	/* Perform the jump search to find the block where the value may be located */
	while (i < size && front && front->n < value)
	{
		size_t j = jump_size;

		back = front;
		/* Move front pointer jump_size steps ahead or until the end of the list */
		while (j && front->next)

			front = front->next, j--;

		printf("Value checked at index [%lu] = [%d]\n", front->index, front->n);
		i += jump_size;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   back->index, front->index);
	/* Perform a linear search within the identified block */
	while (back && back->index <= front->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", back->index, back->n);
		if (back->n == value)
		{
			found_index = back;
			break;
		}
		back = back->next;
	}
	return (found_index);
}
