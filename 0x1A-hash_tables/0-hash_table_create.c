#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash array
 *
 * Return: pointer (address) to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	/* failed to create the hash table */
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	/* failed to create the array of pointers to the lists */
	if (!hash_table->array)
		return (NULL);

	return (hash_table);
}
