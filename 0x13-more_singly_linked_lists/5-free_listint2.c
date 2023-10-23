#include "lists.h"

/**
 * free_listint2 - frees a @listint_t list
 *
 * @head: A reference to the pointer to the first node
 *
 * Return: void (Nothing)
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	/* Frees nodes and moves to the next till NULL */
	for (current = *head; current != NULL; current = next)
	{
		next = current->next;
		free(current);
	}

	*head = NULL;
}
