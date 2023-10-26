#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a @listint_t list
 * that may contain a loop or not
 *
 * @h: A reference to the pointer that points to the first node in the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	/* Check if a loop is present */
	listint_t *fast, *slow, *temp;
	size_t sizeOfFreed;

	sizeOfFreed = 0;
	if (*h == NULL || (*h)->next == NULL)
		return (sizeOfFreed);

	slow = *h;
	fast = *h;

	if (*h != NULL || (*h)->next != NULL)
	{
		while (slow != NULL && slow->next != NULL &&
			   fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (slow == fast)
				break;
		}
	}
	/* No loop */
	if (slow != fast)
		sizeOfFreed += free_listint_withoutLoop(*h);

	/* Loop is found */
	if (slow == fast)
	{
		sizeOfFreed += freeNumOfNodesBeforeLoop(*h, slow, &temp);
		if (sizeOfFreed > 1)
			sizeOfFreed += freeNumOfNodesInLoop(temp, temp->next);
	}

	*h = NULL;
	return (sizeOfFreed);
}

/**
 * freeNumOfNodesBeforeLoop - Frees number of nodes before the loop
 * or meet point
 *
 * @current: The first node in the list
 *
 * @temp: A pointer that stores the address of the meet point between
 * @current and @slow
 *
 * @slow: The node where slow and fast met
 *
 * Description - It moves @slow and @current 1 node at a time until
 * they meet each other, that is the beginning of the loop
 *
 * Return: Number of nodes to free
 */
int freeNumOfNodesBeforeLoop(listint_t *current, const listint_t *slow,
							listint_t **temp)
{
	listint_t *next;
	size_t sizeOfFreed;

	sizeOfFreed = 1;

	/* free until the beginning of the loop */
	do {
		next = current->next;

		free(current);

		if (slow == next)
			break;

		sizeOfFreed++;
		slow = slow->next;
		current = next;

	} while (next != slow);

	*temp = next;
	return (sizeOfFreed);
}

/**
 * freeNumOfNodesInLoop - Frees node that are in the loop
 *
 *
 * @stop: The address to stop freeing that is the meet point
 * or beginning of the loop
 * @traverse: The pointer that traverse through the list after @stop
 *
 * Return: Number of nodes to free
 */
int freeNumOfNodesInLoop(const listint_t *stop, listint_t *traverse)
{
	size_t sizeOfFreed;
	listint_t *next;

	sizeOfFreed = 0;

	/* Frees nodes in the loop */
	do {

		next = traverse->next;

		sizeOfFreed++;

		free(traverse);
			traverse = next;

	} while (next != stop);

	free(next);
	return (sizeOfFreed);
}

/**
 * free_listint_withoutLoop - Frees a @listint_t list that does not
 * contain a loop
 *
 * @head: A pointer to the first node in the @listint_t
 *
 * Return: The size of the list that was free'd
 */
int free_listint_withoutLoop(listint_t *head)
{
	listint_t *next, *current;
	size_t sizeOfFreed;

	current = head;
	sizeOfFreed = 0;

	/* Frees nodes and moves to the next till NULL */
	while (current != NULL)
	{
		next = current->next;
		sizeOfFreed++;
		free(current);
		current = next;
	}

	return (sizeOfFreed);
}
