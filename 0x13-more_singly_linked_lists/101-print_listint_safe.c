#include "lists.h"

/**
 * print_listint_safe - Prints a @listint_t even when it contains a loop
 *
 * @head: A pointer to the first node in the @listint_t list
 *
 * Return: The number of nodes in the @listint_t list
 */
int print_listint_safe(listint_t *head)
{
	listint_t *slow, *fast, *temp;
	int noOfNodes;

	slow = head;
	fast = head;
	noOfNodes = 0;

	if (head == NULL || head->next == NULL)
		return (noOfNodes);

	if (head != NULL || head->next != NULL)
	{
		while (slow != NULL && slow->next != NULL &&
			fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;

			/* A loop exist */
			if (slow == fast)
			break;
		}
	}
	/* There is no loop */
	if (slow != fast)
		noOfNodes = noLoopPrint(head);
	else
		{
		/* There is a loop */
		noOfNodes += getNumOfNodesBeforeLoop(head, slow, &temp);
		noOfNodes += getNumOfNodesInLoop(temp, temp->next);

		/* Meeting point */
		printf("-> [%p] %d\n", (void *)temp, temp->n);
	}

	return (noOfNodes);
}

/**
 * noLoopPrint - Traverse through the list when there is no loop in @listint_t
 *
 * @head: A pointer to the first node
 *
 * Return: Number of nodes in the list
 */
int noLoopPrint(const listint_t *head)
{
	int noOfNodes;

	noOfNodes = 0;
	while (head != NULL)
	{
		noOfNodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (noOfNodes);
}

/**
 * getNumOfNodesBeforeLoop - Get the number of nodes before the loop
 *
 * @head: A pointer to the first node in @listint_t list
 * @slow: The meeting point of the fast and slow pointer
 * @temp: The reference to the pointer that stores the address of start
 * of the loop in @listint_t list
 *
 * Return: The number of nodes before the loop
 */
int getNumOfNodesBeforeLoop(listint_t *head, const listint_t *slow,
							listint_t **temp)
{
	int noOfNodes;

	noOfNodes = 1;
	/* Get the number of nodes before the loop */
	while (head != slow)
	{
		noOfNodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		slow = slow->next;
		head = head->next;
	}

	printf("[%p] %d\n", (void *)head, head->n);
	*temp = head; /* Store the beginning of the loop in the temp pointer */

	return (noOfNodes);
}

/**
 * getNumOfNodesInLoop - Get the number of nodes in a loop in @listint_t
 *
 * @stop: The starting point of the loop
 * @traverse: We use this to traverse still it reaches @stop
 *
 * Return: The number of nodes in the loop @listint_t
 */
int getNumOfNodesInLoop(const listint_t *stop, const listint_t *traverse)
{
	int noOfNodes;

	noOfNodes = 0;

	/* Traverse through the loop starting from the next pointer after stop */
	do {

		if (traverse != stop)
		{
			noOfNodes++;
			printf("[%p] %d\n", (void *)traverse, traverse->n);
		}

		traverse = traverse->next;
	} while (traverse != stop);

	return (noOfNodes);
}
