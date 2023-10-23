#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a @listint_t list
 *
 * @head: A reference to the pointer that points to the first node in the list
 * @n: The data to store in each node
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	/* Allocation of memory fails */
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL; /* Initial */

	/* When the new node is the first node in the list */
	if (*head == NULL)
		*head = newNode;
	else
	{
		/* Swap */
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode); /* New node successfully created */
}
