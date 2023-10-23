#include "lists.h"


/**
 * listint_len - Get the number of element in a @listint_t list
 *
 * @h: A pointer to first element in the list
 *
 * Return: The number of element in the linked-list
 */
size_t listint_len(const listint_t *h)
{
	int noOfElement;

	noOfElement = 0;

	/* Tranverse till the last node */
	while (h != NULL)
	{
		noOfElement++;
		h = h->next;
	}

	return (noOfElement);
}
