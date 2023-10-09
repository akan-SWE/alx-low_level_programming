#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocate memory for an array, using malloc
 *
 * @nmemb: number of blocks
 * @size: size of each block
 *
 * Return:
 * - The allocated memory
 * - NULL if malloc fails
 * - NULL if @nmemb or @size is null,
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pMalloc;
	int totalBlocks, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalBlocks = nmemb * size;


	pMalloc = malloc(totalBlocks);

	if (pMalloc == NULL)
		return (NULL);


	for (i = 0; i < totalBlocks; i++)
		*((char *)pMalloc + i) = 0;

	return (pMalloc);
}
