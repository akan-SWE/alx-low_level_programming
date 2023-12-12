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
	newNode->n = n;
	newNode->prev = NULL, newNode->next = NULL;
	/* Insert at beginning */
	if (!idx)
	{
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (current && nodeIdx < (idx - 1))
	{
		nodeIdx++;
		current = current->next;
	}
	/* Index out of bounds */
	if (!current)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	newNode->prev = current;

	if (current->next) /* Check if current is not the last node */
		current->next->prev = newNode;

	current->next = newNode;

	return (newNode);
}
