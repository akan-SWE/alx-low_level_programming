#include "main.h"

/**
 * _puts_recursion - Print a string recursively, followed by a new line.void
 *
 * @s: The string to print.
 *
 * Return: void (Nothing)
 */
void _puts_recursion(char *s)
{
  /* Recursion stops when *s reaches null */
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	else
	putchar('\n'); /* Print newline after the last element */
}
