#include "hash_tables.h"

/**
 * key_index - generates index based on a hash value
 *
 * @key: the key
 * @size: size of the array of the hash_table
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* generate the hash value */
	unsigned long int hash_value = hash_djb2(key);
	/* return the index based on the size of the array */
	return (hash_value % size);
}
