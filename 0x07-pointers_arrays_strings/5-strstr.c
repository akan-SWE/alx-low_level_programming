#include "main.h"

/**
 * _strstr - check if the string in needle matches are any substring
 * in haystack
 *
 * @haystack: needle will check this string if the substring is present
 * @needle: the string that will be checked
 *
 * Return: haystack if needle it empty, a pointer to a character if it matches
 * and NULL if no matches
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	/*check if there is a substring*/
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
		}
		/*
		 * Potential match found
		 * return a pointer to the start of the match
		 */
			if (*(needle + j) == '\0')
				return (haystack + i);
	}
	return (NULL); /*no matches*/
}
