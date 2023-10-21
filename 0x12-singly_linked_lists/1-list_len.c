#include "lists.h"

/**
 * list_len - Get the number of element or nodes
 * in a list
 *
 * @h: A pointer to first element
 *
 * Return: The number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	int noOfElement;

	noOfElement = 0;
	while (h != NULL)
	{
		h = h->next;
		noOfElement++;
	}
	return (noOfElement);
}
