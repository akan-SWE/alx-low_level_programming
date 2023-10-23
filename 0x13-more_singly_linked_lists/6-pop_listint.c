#include "lists.h"
/**
 * pop_listint - Deletes the head node of a @listint_t linked list
 *
 * @head: A reference to the pointer to the first element
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int nodeData;
	listint_t *popNode;

	nodeData = 0;
	if (*head == NULL)
		return (nodeData);

	popNode = *head;

	nodeData = popNode->n; /* Current value of the node to free */

	*head = (*head)->next;

	free(popNode);
	return (nodeData);
}
