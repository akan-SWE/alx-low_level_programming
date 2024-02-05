#include "hash_tables.h"

/**
 * delete_list - Deletes a list of type hash_node_t
 *
 * @head: pointer to the first node in the list
 *
 * Return: void
 */
void delete_list(hash_node_t *head)
{
	hash_node_t *current = head;

	while (current)
	{
		hash_node_t *next = current->next;

		free(current->key), free(current->value);
		free(current);
		current = next;
	}
}

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			delete_list(ht->array[i]);

		ht->array[i] = NULL;
	}

	free(ht->array), ht->array = NULL;
	free(ht);
}
