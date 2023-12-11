#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: A reference to the address of the first node
 * @idx: The index to insert the node
 * @n: The data to insert
 *
 * Return: Address of the new node, on failure it returns NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int nodeIdx = 0;

	/* create new node */
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/* handle memory allocation failure */
	if (!newNode)
		return (NULL);

	while (current->next && nodeIdx < idx)
	{
		nodeIdx++;
		current = current->next;
	}
	if (idx > nodeIdx)
		return (NULL);
	/* Insert at beginning */
	if (!idx)
	{
		free(newNode);
		return (add_dnodeint(h, n));
	}

	newNode->n = n;
	newNode->next = current;
	current->prev->next = newNode;
	newNode->prev = current->prev;

	return (newNode);
}
