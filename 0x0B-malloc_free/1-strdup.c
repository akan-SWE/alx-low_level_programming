#include "main.h"

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
	/*Allocate memory including the null-terminator*/
	copy = (char *)malloc(sizeof(char) * (size + NULL_BYTE));

	if (copy == NULL)
	{
		write(1, "failed to allocate memory", STRING_SIZE);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';
	return (copy);
}
