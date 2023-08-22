#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string pointer parameter
 *
 * Return: Alway 0 (Success)
 */

int _strlen(char *s)
{

	int i, length;

	length = 0;
	for (i = 0; *(s + length) != '\0'; i++)
	{
		length++;
	}
	return (length);
}
