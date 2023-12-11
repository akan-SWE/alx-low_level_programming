#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of @dlistint_t list
 *
 * @head: A reference to the address of the first element in the list
 * @n: The data to insert
 *
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Create the element */
	dlistint_t *newElement = malloc(sizeof(dlistint_t));

	/* Handle memory failure */
	if (!newElement)
		return (NULL);

	newElement->n = n;

	/* List is empty */
	if (!*head)
	{
		*head = newElement;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	else
	{
	/* List is not empty */
		(*head)->prev = newElement;
		newElement->next = *head;
		newElement->prev = NULL;
		*head = newElement;
	}

	return (newElement);
}
