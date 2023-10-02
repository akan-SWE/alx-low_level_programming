#include "main.h"

/**
 * _strpbrk - checks for any matches in the both string
 * and returns a pointer of the character
 *
 * @s: the first string
 * @accept: the second string
 *
 * Return: a pointer to the character in s, Otherwise return NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/*check if there is a match and return a pointer of that character*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}

	}
	return (NULL); /*return NULL if no match found*/
}
