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
	int i;

	char *convert = s; /*pointer to the string*/

	/*convert the string to uppercase*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	}

	return (convert);
}
