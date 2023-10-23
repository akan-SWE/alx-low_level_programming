#include "lists.h"

/**
 * sum_listint - Get the sum of all data (n) in @listint_t linked list
 *
 * @head: A pointer to the first node in @listint_t
 *
 * Return: The sum of all data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	/* Go through the list adding all the data (n) to sum */
	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
