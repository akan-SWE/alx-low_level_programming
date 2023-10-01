#include "main.h"

/**
 * _strchr - checks for any occurence of c in the string
 * and return a pointer to the first occurrence
 *
 * @s: the string
 * @c: the character to check for in the string
 *
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	/* check if it matches and return a pointer if it does */
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL); /*return NULL if no character matches*/
}
