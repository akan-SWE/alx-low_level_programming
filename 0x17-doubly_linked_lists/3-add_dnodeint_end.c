#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of @dlistint_t list
 *
 * @head: A reference to the address of the first element in the list
 * @n: The integer to insert
 *
 * Return: Address of the new element, on failure NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Create the element */
	dlistint_t *newElement = malloc(sizeof(dlistint_t));

	/* Handle memory allocation failure */
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
		dlistint_t *temp = *head;

		/* Move to the element before the last element */
		while (temp->next)
			temp = temp->next;

		temp->next = newElement;
		newElement->prev = temp;
		newElement->next = NULL;
	}

	return (newElement);
}
