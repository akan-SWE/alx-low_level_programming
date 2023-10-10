#ifndef DOG_H
#define DOG_H

/* system headers */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct dog - Represents information about a dog.
 *
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 * This structure stores essential information about a dog
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

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
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 *
 * @d: The object pointer
 *
 * Return: void (Nothing)
 */
void print_dog(struct dog *d);

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
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
