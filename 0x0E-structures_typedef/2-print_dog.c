#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: The object pointer
 *
 * Return: void (Nothing)
 */
void print_dog(struct dog *d)
{

	/* Name */
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Age */
	if (isnan(d->age))
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);

	/* Owner */
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
