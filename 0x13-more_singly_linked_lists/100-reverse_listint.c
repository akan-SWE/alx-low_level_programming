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

	listint_t *current, *prev, *next;

	/* Initial */
	prev = NULL;
	current = *head;
	next = current->next;

	while (current != NULL && next != NULL)
	{
		/* Pointing current to it previous */
		current->next = prev;
		prev = current;

		current = next;
		next = current->next;
	}

	current->next = prev;
	prev = current;

	/* Head now points to the last node making it the first */
	*head = prev;
	return (prev);
}
