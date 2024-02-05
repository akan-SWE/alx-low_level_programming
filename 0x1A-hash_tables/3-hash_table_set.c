#include "hash_tables.h"

/**
 * insert_beg - inserts a node at the beginning of a list
 *
 * @head: pointer to the first node
 * @key: the key of the current node
 * @value: the value of the current node
 *
 * Return: 1 on success 0 on failure
 */
int insert_beg(hash_node_t **head, char *key, char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	node->key = key;
	node->value = value;
	node->next = *head;
	*head = node;

	return (1);
}

/**
 * hash_table_set - adds element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *key_cpy, *value_cpy;
	/* return if key is empty or hash table is None*/
	if (!strlen(key) || !ht)
		return (0);

	/* generate the index to the key */
	index = key_index((const unsigned char *)key, ht->size);

	key_cpy = strdup(key);
	if (!key_cpy)
		return (0);

	value_cpy = strdup(value);
	if (!value_cpy)
	{
		free(key_cpy);
		return (0);
	}

	/* insert into the list at the index generated */
	return (insert_beg(&ht->array[index], key_cpy, value_cpy));
}
