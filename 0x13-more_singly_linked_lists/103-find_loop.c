#include "lists.h"

/**
 * find_listint_loop - Finds loop in linked list
 *
 * @head: A pointer to the first node
 *
 * Return: The address of the node where the loop starts or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	/* No loop in the list */
	if (head == NULL || (head)->next == NULL)
		return (NULL);

	slow = head;
	fast = head;

	if (head != NULL || head->next != NULL)
	{
		/* Check if a loop is present */
		while (slow != NULL && slow->next != NULL &&
			   fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (slow == fast)
				break;
		}
	}

	/* No loop in the list */
	if (slow != fast)
		return (NULL);

	return (getLoopStart(head, slow));
}

/**
 * getLoopStart - Get the node that starts the loop
 *
 * @head: A pointer to the first node in the list
 * @slow: The position where slow and fast met
 *
 * Return: The address of that node
 */
listint_t *getLoopStart(listint_t *head, listint_t *slow)
{

	while (head != slow)
	{
		head = head->next;
		slow = slow->next;
	}
	/* The address where the loop starts */
	return (head);
}
