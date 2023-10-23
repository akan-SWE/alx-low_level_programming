#include "lists.h"

/**
 * free_listint - frees a @listint_t list
 *
 * @head: A pointer to the first node in the list
 *
 * Return: void (Nothing)
 */
void free_listint(listint_t *head)
{

	listint_t *next, *current;

	current = head;
	/* Frees nodes and moves to the next till NULL */
	while (current != NULL)
	{

		next = current->next;
		free(current);
		current = next;
	}
}
