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
	listint_t *current = NULL;
	listint_t *prev = NULL;


	current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;

	}

	*head = prev;
	return (*head);
}
