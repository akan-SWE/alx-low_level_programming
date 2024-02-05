#include "hash_tables.h"

/**
 * get_value - search and return the value associated with a key
 *
 * @head: first node in the list
 * @key: the key
 *
 * Return: the value or NULL if key can't be found
 */
char *get_value(hash_node_t *head, const char *key)
{

	while (head)
	{
		if (!strcmp(head->key, key))
			return (head->value);

		head = head->next;
	}
	return (NULL);
}

/**
 * hash_table_get - get the value associated with a key
 *
 * @key: the key
 * @ht: the hash table
 *
 * Return: the value or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (!ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	return (get_value(ht->array[idx], key));
}
