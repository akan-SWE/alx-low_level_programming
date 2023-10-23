#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a @list_int list
 *
 * @head: A reference to the pointer to the first node
 *
 * @n: The data in each node in the @listint_t list
 *
 * Return: The address of the new element, or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	/* Memory allocation fails */
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	/* The first node in the list */
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		/* Go to the last node in the list */
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
	}

	return (newNode); /* Created successfully */
}
