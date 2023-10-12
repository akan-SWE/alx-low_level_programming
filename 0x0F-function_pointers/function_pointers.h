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

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */


