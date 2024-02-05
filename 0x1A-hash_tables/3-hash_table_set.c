#include "hash_tables.h"

/**
 * key_is_unique - Checks if a key is not already in a list
 *
 * @head: pointer to the first node
 * @key: the key
 *
 * Return: NULL if the key is unique, otherwise the address of the node
 * if not unique
 */
hash_node_t *key_is_unique(hash_node_t *head, char *key)
{
	while (head)
	{
		if (!strcmp(head->key, key))
			return (head);

		head = head->next;
	}
	return (NULL);
}

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
	hash_node_t *node = key_is_unique(*head, key);

	if (!node)
	{
		node = malloc(sizeof(hash_node_t));

		if (!node)
			return (0);

		node->key = key;
		node->value = value;
		node->next = *head;
		*head = node;
	}
	else
	{
		free(node->value), free(key);
		node->value = value;
	}

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
