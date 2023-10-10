#ifndef DOG_H
#define DOG_H

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
	int age;
	char *owner;
};

#endif /* DOG_H */
