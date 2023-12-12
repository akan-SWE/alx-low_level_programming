#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes the node at @index of @dlistint_t list
 *
 * @head: Reference to the address of the first node in the list
 * @index: The index to remove
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int nodeIdx = 0;

	/* List is empty */
	if (!*head)
		return (-1);

	/* Get node */
	while (current->next && nodeIdx < index)
	{
		nodeIdx++;
		current = current->next;
	}
	/* Index out of bonds */
	if (!current || nodeIdx != index)
		return (-1);
	/* Joining the chains */
	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
		current->prev->next = current->next;
	/* Removing the first node in the list */
	if (!index)
		*head = current->next;

	free(current);
	return (1);
}
