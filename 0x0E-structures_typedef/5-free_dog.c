#include "dog.h"

/**
 * free_dog - freeing up the dog_t
 *
 * @d: The object pointer of dog_t
 *
 * Return: void (Nothing)
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
