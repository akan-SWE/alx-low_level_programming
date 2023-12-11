#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of @dlistint_t list
 *
 * @head: Address of the first node in the list
 *
 * Return: Sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		/* Increment the sum by adding each element data */
		sum += head->n;
		head = head->next;
	}
	/* Return the sum */
	return (sum);
}
