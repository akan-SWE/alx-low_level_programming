#include "main.h"

/**
 * string_toupper - convert lowercase string to uppercase
 *
 * @s: the string to be converted
 *
 * Return: the converted string
 */

char *string_toupper(char *s)
{
	int i, common_difference;

	char *convert = s; /*pointer to the string*/

	common_difference = 32;
	/*convert the string to uppercase*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - common_difference;
		else
			s[i] = s[i];
	}

	return (convert);
}
