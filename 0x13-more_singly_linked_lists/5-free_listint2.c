#include "lists.h"

/**
 * frees_listint2 - frees a @listint_t list
 *
 * @head: A reference to the pointer to the first node
 *
 * Return: void (Nothing)
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	current = *head;
	/* Frees nodes and moves to the next till NULL */
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
