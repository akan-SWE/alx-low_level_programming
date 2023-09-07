#include "main.h"

/**
 * _strlen_recursion -  Calculates the length of a string recursively.
 * @s: The string for which to find the length.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{

	int count;

	count = 1;

	if (*s == '\0')
		return (0);

	return (count + _strlen_recursion(s + 1));
}
