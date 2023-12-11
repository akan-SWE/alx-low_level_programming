#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of @dlistint_t list
 *
 * @head: Address of the first node in the list
 * @index: The index or position of the node in the list starting from 0
 *
 * Return: The nth node, or NULL if it does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int node = 0;

	/* Traverse till index or end of list */
	while (current && node < index)
	{
		current = current->next;
		node++;
	}

	/* Node does not exit */
	if (!current)
		return (NULL);

	return (current);
}
