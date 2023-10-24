#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at @index of @listint_t list
 *
 * @head: A reference of the pointer to the first node in @lisint_t list
 *
 * @index: The index to delete starting from 0
 *
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextNode, *current;
	u_int i;

	/* List is empty */
	if (*head == NULL)
		return (-1);

	/* List is not empty but delete first node */
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		/* Index out of bonds */
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	/* Let the previous node, point to the next node after the deleted node*/
	nextNode = current->next;
	current->next = nextNode->next;

	free(nextNode);
	return (1);
}
