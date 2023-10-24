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
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;

		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (prev);
}
