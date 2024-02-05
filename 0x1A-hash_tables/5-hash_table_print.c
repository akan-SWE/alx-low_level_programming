#include "hash_tables.h"
#include <stdio.h>


/**
 * print_node - output the key and value for each node in the list
 *
 * @temp: pointer to the first node in the list
 *
 * Return: void
 */
void print_node(hash_node_t *temp)
{
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);

		if (temp->next)
			printf(", ");
		temp = temp->next;
	}
}


/**
 * hash_table_print - print the key/value in the order that
 * they appear in the array of hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *head = ht->array[i];

		if (head)
			print_node(head);

	}
	printf("}\n");
}
