#include "lists.h"


/**
 * add_node_end - Inserts a node at the end of a list
 *
 * @head: Taking the address of the pointer to the first node
 * @str: The string to insert at the @str member of struct list_s
 *
 * Return: The address of this new node created, or NULL if the function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNode = NULL;
	list_t *temp;

	newNode = malloc(sizeof(list_t));

	/* Memory allocation failed */
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str); /* Get a copy of the string */
	newNode->next = NULL;

	/* strdup fails */
	if (newNode->str == NULL)
	{
		free(newNode->str);
		return (NULL);
	}

	/* When the list is empty and this node is the first node */
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	/* Using a temporary pointer to tranverse through the list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode; /* Adding the new node to the list */
	newNode->next = NULL;
	return (newNode);
}
