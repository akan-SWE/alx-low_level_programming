#include "dog.h"


/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: The dog object pointer of type struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: void (Nothing)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

