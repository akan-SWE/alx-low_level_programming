#include "main.h"

/**
 * _puts_recursion - Print a string recursively, followed by a new line.
 * @s: The string to print.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		putchar('\n');
	}
}
