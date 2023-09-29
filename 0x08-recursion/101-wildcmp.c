#include "main.h"

/**
 * wildcmp - compares two strings, where @s2 can contain wildcard '*'
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		/* skip if any wildcard is still in s2 or s1 has reached null */
		if (*(s2 + 1) == '*' || *s1 == '\0')
			return (wildcmp(s1, s2 + 1));

		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* No case matched means they are not identical */
}

