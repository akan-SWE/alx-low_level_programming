#include "dog.h"

/**
 * new_dog - Creates a new dog
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The new dog that is created, otherwise NULL if the function
 * fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pDog = NULL;

	pDog = malloc(sizeof(dog_t));

	if (pDog == NULL)
		return (NULL);

	/* Create a copy of the string */
	pDog->name = strdup(name);
	pDog->owner = strdup(owner);

	pDog->age = (age);

	return (pDog);
}
