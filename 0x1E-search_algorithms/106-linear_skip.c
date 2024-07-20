#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *
 * @list: A Pointer to the head of the skip list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where the value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *end;
	/* return when list is null */
	if (!list)
		return (NULL);

	/* find block where value might be located */
	start = list, end = list;
	while (end->express && end->n < value)
	{
		start = end;
		end = end->express;
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
	}

	if (value > end->n)
	{
		/* value not found */
		start = end;
		while (end->next)
			end = end->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start->index,
		   end->index);
	/* find vlaue within the block */
	while (start && start->n <= end->n)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}

	return (NULL);
}
