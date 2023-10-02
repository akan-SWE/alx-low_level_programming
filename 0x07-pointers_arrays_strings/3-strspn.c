#include "main.h"

/**
 * _strspn - calculates  the length (in bytes) of the initial segment of s
 * which consists entirely of bytes in accept.
 *
 * @s: the initial string
 * @accept: string that will be checked
 *
 * Return: count;
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, strLength, count;

	count = 0;
	strLength = strlen(accept);

	while (*s)
	{
		for (i = 0; i <= strLength; i++)
		{
			/* No match found after each index of s have been checked */
			if (i == strLength)
				return (count);

			if (*s == *(accept + i))
			{
				/* Good there is a match so increment count and break immediately */
				count++;
				break;
			}
		}
		s++;
	}
	return (count);
}
