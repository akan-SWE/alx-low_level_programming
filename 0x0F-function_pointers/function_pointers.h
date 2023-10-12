#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* system headers */
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Prints a name
 *
 * @name: The name to print
 * @f: The function pointer that calls the function
 * to print the name
 *
 * Return: void (Nothing)
 */
void print_name(char *name, void (*f)(char *));

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
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer
 *
 * @array: The array
 * @size: Size of the array
 * @cmp: The function pointer
 *
 * Return:
 * - The index when @cmp returns 1, otherwise
 * - -1 if cmp or array == NULL, or size is less than or equals to 0
 * - -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * enum constant - defines constant
 *
 * @ZERO: symbolic to 0
 * @NUMOFARG: symbolic to 2
 */
enum constant
{
	ZERO = 0, NUMOFARG = 2
};
#endif /* FUNCTION_POINTERS_H */


