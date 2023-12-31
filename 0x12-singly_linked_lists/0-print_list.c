#include "lists.h"

/**
 * print_list - prints all element in a list_t
 *
 * @h: A pointer to the first element
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int i, len;
	char *copy;

	i = 0;
	while (h != NULL)
	{
		copy = strdup(h->str);
		len = strlen(copy);
		if (h->str == NULL) /* element is null */
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", len, h->str);

		h = h->next;
		i++;
	}
	return (i); /* Number of nodes */
}
