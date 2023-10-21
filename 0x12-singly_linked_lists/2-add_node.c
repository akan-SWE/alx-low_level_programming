#include "lists.h"

/**
 * add_node - Inserts a node at the end of the linked list
 *
 * @head: A pointer to the first node
 * @str: The name to store in each node
 *
 * Return: The address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	/* Memory allocation failed */
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str); /* Get a copy of the string */


	/* strdup fails */
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;

	/* Head is NULL, when there is no node in the list so point new node to it */
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{

		newNode->next = *head; /* Let new node point to the previous first node */
		*head = newNode; /* Set head to this new node */
	}
	return (*head);
}
