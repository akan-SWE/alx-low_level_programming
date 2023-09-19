#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strdup - create a copy of the string @str
 *
 * @str: the string to create a copy from
 *
 * Return:
 * - A pointer to a new string, that is a copy of @str
 * - NULL is @str = NULL
 * - NULL for failed memory allocation
 */
char *_strdup(char *str)
{

	int i, size;
	char *copy;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	copy = (char *)malloc(sizeof(char) * size);

	if (copy == NULL)
	{
		write(1, "failed to allocate memory", 25);
		return (NULL);
	}

	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}
