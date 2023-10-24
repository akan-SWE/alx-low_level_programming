#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position
 *
 * @head: A reference to the pointer to the first node
 * @idx: The index or position to insert the new node starting from 0
 * @n: The data for the new node
 *
 *
 * Return: The address of the new node created, otherwise NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp, *next;
	u_int i;

	newNode = malloc(sizeof(listint_t));

	/* Memory allocation failed */
	if (newNode == NULL)
		return (NULL);

	temp = *head;
	/* Get the index before the specified index */
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			break;
	}

	/* Not possible to add node at such index */
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	/* Swap */
	next = temp->next;
	newNode->next = next;
	temp->next = newNode;

	/* Insert data */
	newNode->n = n;

	return (newNode);
}
