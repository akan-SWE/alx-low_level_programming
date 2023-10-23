#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of @listint_t
 *
 * @head: A pointer to the first node
 * @index: The index or node to get to starting from 0
 *
 * Return: The nth node of @listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	u_int i;

	/* No node in the list */
	if (head == NULL)
		return (NULL);

	/* Get the nth node */
	for (i = 0; i < index; i++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
