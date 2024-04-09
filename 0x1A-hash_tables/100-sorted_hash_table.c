#include "hash_tables.h"
#include <ctype.h>
#include <stdio.h>

/* Prototypes */
shash_node_t *key_is_unique(shash_node_t *, char *);
shash_node_t *insert_beg(shash_node_t **, char *, char *);
void insert_to_sorted_list(shash_table_t *, shash_node_t *);


/**
 * ascii_sum - Calculates the sum of the ascii values in the string
 *
 * @str: the string
 *
 * Return: the sum
 */
int ascii_sum(char *str)
{
	int sum = 0;

	while (*str)
	{
		sum += toascii(*str);
		str++;
	}
	return (sum);
}


/**
 * insert_beg - inserts a node into the sorted hash table
 *
 * @head: Reference to the index where the node will be inserted to
 * @key: The key
 * @value: The value
 *
 * Return: The node otherwise NULL if an error occurred
 */
shash_node_t *insert_beg(shash_node_t **head, char *key, char *value)
{
	shash_node_t *node = key_is_unique(*head, key);

	if (node == NULL)  /* key is unique */
	{
		node = malloc(sizeof(shash_node_t));
		if (node == NULL)
			return (NULL);

		node->key = key;
		node->value = value;
		node->next = *head;
		*head = node;
		node->snext = NULL;
		node->sprev = NULL;
	}
	else  /* key is not unique */
	{
		free(node->value), free(key);  /* free up the previous value */
		node->value = value;  /* insert new value */
	}
	return (node);
}


/**
 * key_is_unique - Checks if a key is unique
 *
 * @head: Pointer to the index in the hash table
 * @key: The key
 *
 * Return: NULL if the key is unique otherwise the node where
 * the key is found
 */
shash_node_t *key_is_unique(shash_node_t *head, char *key)
{
	while (head)
	{
		/* found a match */
		if (strcmp(head->key, key) == 0)
			return (head);

		head = head->next;
	}
	return (NULL);  /* no match key is unique */
}


/**
 * shash_table_set - Inserts the node or element in the hash table
 *
 * @ht: The hash table
 * @key: The key
 * @value: the value
 *
 * Return: 1 on success 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	unsigned long int index;
	char *key_cpy, *value_cpy;
	/* return if key is empty or hash table is NULL */
	if (strlen(key) == 0 || ht == NULL)
		return (0);

	key_cpy = strdup(key);
	if (key_cpy == NULL)
		return (0);
	value_cpy = strdup(value);
	if (value_cpy == NULL)
	{
		free(key_cpy);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);  /* index */
	node = insert_beg(&ht->array[index], key_cpy, value_cpy);

	insert_to_sorted_list(ht, node);
	return (1);
}


/**
 * insert_to_sorted_list - Setup the pointers for the sorted list
 *
 * @ht: The hash table
 * @node: The new node or element
 *
 * Return: void
 */
void insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	if (ht->shead == NULL)
		ht->shead = node, ht->stail = node;
	else
	{
		shash_node_t *temp = ht->shead;
		/* get the position of the current node */
		while (temp && ascii_sum(node->key) > ascii_sum(temp->key))
			temp = temp->snext;

		if (temp == NULL)
		{
			/* the new node key has the highest ascii sum so inserting at end*/
			node->snext = NULL;
			node->sprev = ht->stail;
			ht->stail->snext = node;
		}
		else
		{
			node->snext = temp;
			if (temp->sprev)
			{
				temp->sprev->snext = node;
				node->sprev = temp->sprev;
			}
			temp->sprev = node;
			/* update head */
			while (ht->shead->sprev)
				ht->shead = ht->shead->sprev;
			/* update tail */
			while (ht->stail->snext)
				ht->stail = ht->stail->snext;
		}
	}
}


/**
 * shash_table_create - Creates a sorted hash table data structure
 *
 * @size: The size of the hash table
 *
 * Return: The hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	/* create the hash table instance */
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	/* create array instance of the hash table*/
	ht->array = malloc(sizeof(shash_node_t) * size);
	if (ht->array == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}


/**
 * shash_table_get - Returns the value assciated to a key
 *
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *head;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}


/**
 * shash_table_print - Prints or outputs the sorted list
 *
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = ht->shead;

	putchar('{');
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext != NULL)
			printf(", ");

		temp = temp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Prints or outputs the sorted list in reverse order
 *
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = ht->stail;

	putchar('{');
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev != NULL)
			printf(", ");

		temp = temp->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes or free up allocated memory for the hash table
 *
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *temp = ht->array[i];

		if (temp)
		{
			while (temp)
			{
				shash_node_t *next = temp->next;

				free(temp->key), free(temp->value);
				free(temp);
				temp = next;
			}
		}
	}
	free(ht->array), ht->array = NULL;
	free(ht);
}
