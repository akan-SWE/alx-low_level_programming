#include "lists.h"

/**
 * print_listint - prints all element of a @listint_t list
 *
 * @h: A pointer to the first node in the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int noOfNodes;

	noOfNodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next; /* Go to the next node */
		noOfNodes++;
	}

	return (noOfNodes);
}
