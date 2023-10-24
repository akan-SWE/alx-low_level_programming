#include "lists.h"

/**
 * reverse_listint - Reverses a @listint_t linked list
 *
 * @head: A reference of the pointer to the first node
 *
 * Return: A pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev, *next;

	/* Initial */
	prev = NULL;
	next = (*head)->next;

	while (*head != NULL && next != NULL)
	{
		/* Pointing current to it previous */
		(*head)->next = prev;
		prev = (*head);

		(*head) = next;
		next = (*head)->next;
	}

	(*head)->next = prev;
	prev = (*head);
	/* Head now points to the last node making it the first */
	*head = prev;
	return (prev);
}
