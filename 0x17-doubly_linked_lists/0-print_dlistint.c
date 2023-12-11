#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a @dlistint_t list
 *
 * @h: Address of the first node
 *
 * Return: The number of element in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int noOfElement;

	noOfElement = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		noOfElement++;
	}

	return (noOfElement);
}
