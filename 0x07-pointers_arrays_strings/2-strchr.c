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
	int i;

	/*check if it matches and return a pointer if it does*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL); /*return NULL if no character matches*/
}
