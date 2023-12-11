#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked @dlistint_t
 * list
 *
 * @h: Address of the first element in the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int noOfElements = 0;

	while (h)
	{
		noOfElements++;
		h = h->next;
	}

	return (noOfElements);
}
