#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array
 *
 * @array: The array
 * @size: Size of the array
 * @action: The function pointer that points the function passed
 *
 * Return: void (Nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int index;

	/* The pointer function is null or empty */
	if (action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]); /* Pass each index as a parameter to the function */
}
