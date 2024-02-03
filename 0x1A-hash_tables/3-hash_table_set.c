#include "hash_tables.h"

/**
 * insert_end - inserts a node at the end of a list
 *
 * @head: pointer to the first node
 * @node: the node to insert
 *
 * Return: (void)
 */
void insert_end(hash_node_t *head, hash_node_t *node)
{
	while (head->next)
		head = head->next;
	head->next = node;
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
	hash_node_t *node;
	/* return if key is empty */
	if (!strlen(key))
		return (0);

	/* get the index to the key */
	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	/* insert directly in the box if current index is empty */
	if (!ht->array[index])
		ht->array[index] = node;
	else
		/* insert at the end of the list starting from the index */
		insert_end(ht->array[index], node);

	return (1);  /* success */
}
