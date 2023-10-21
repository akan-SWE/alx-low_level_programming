#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: A pointer to the first node in the list
 *
 * Return: void (Nothing)
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	/* Tranverse through the list deleting every node */
	current = head;
	while (current != NULL)
	{
		next = current->next;
		/* Freeing up the string and the node */
		free(current->str);
		free(current);

		current = next;
	}
}
