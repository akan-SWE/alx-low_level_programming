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
	listint_t *newNode, *temp, *next;
	u_int i;

	newNode = malloc(sizeof(listint_t));
	/* Memory allocation failed */
	if (newNode == NULL)
		return (NULL);

	newNode->n = n; /* Insert data (n) */

	/* When the head is empty and index is 0 */
	if (*head == NULL && idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	/* When the head is not empty but index is 0 */
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	/* Get the index before the specified index */
	for (temp = *head, i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			break;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/* Swap */
	next = temp->next;
	newNode->next = next;
	temp->next = newNode;
	return (newNode);
}
