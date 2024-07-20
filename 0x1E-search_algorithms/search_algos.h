#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int jump_search(int *, size_t, int);
int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
int advanced_binary(int *, size_t, int);
void print_array(int *, size_t, size_t);
int exponential_search(int *, size_t, int);
skiplist_t *linear_skip(skiplist_t *, int);
int interpolation_search(int *, size_t, int);
listint_t *jump_list(listint_t *, size_t, int);

/* void free_list(listint_t *list); */
/* listint_t *create_list(int *array, size_t size); */
/* void print_list(const listint_t *list); */
#endif /* SEARCH_ALGOS_H_ */
