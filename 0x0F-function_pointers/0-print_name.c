#include "function_pointers.h"


/**
 * print_name - Prints a name
 *
 * @name: The name to print
 * @f: The function pointer that calls the function
 * to print the name
 *
 * Return: void (Nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name); /* Call the function to print the name */
}
