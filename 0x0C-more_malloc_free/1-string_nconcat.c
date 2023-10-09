#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes to Concatenates s1 to
 *
 * Return: The concatenated string, otherwise return NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_nconcat;
	int s1Length, size, i;

	/* Treat NULL argument as empty string */
	if (s2 == NULL || s1 == NULL)
	{
		s2 = "";
		s1 = "";
	}

	/* n is greater than the length of s2 */
	if (n >= strlen(s2))
		n = strlen(s2);

	s1Length = strlen(s1);
	size = (s1Length + n);

	string_nconcat = malloc((size + NULL_BYTE) * sizeof(char));

	/* Allocation of memory failed */
	if (string_nconcat == NULL)
		return (NULL);

	i = 0;
	/* Putting s1 in the new allocated memory */
	while (i < s1Length)
	{
		string_nconcat[i] = s1[i];
		i++;
	}

	/* Putting n bytes, into the remaining memory */
	while (i < size)
	{
		string_nconcat[i] = *s2;
		i++;
		s2++;
	}
	string_nconcat[i] = '\0';
	return (string_nconcat);
}
