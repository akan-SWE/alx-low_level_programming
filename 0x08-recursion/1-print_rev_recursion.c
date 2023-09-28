#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints the reverse of a string recursively.
 * @s: The string to reverse and print.
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
