#include "lists.h"

/**
 * free_dlistint - Frees @dlistint_t list
 *
 * @head: Address of the first element in the list
 *
 * Return: void (Nothing)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	/* Free up each element till the last */
	while (current)
	{
		dlistint_t *nextNode = current->next;

		current->prev = NULL;
		free(current);

		current = nextNode;
	}
}
