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

	newNode->next = *head; /* Let new node point to the previous first node */
	*head = newNode; /* Set head to this new node */

	return (*head);
}
