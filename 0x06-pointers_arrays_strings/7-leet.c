#include <string.h>

#include "main.h"

/**
 * leet - changes character to their leet code representation
 * @str: the string
 * Return: leet coded string
 */

char *leet(char *str)
{
	int i, j, strLength, keyLength;
	/*keys and values*/
	char *key	= "aAeEoOtTlL";
	char *value = "4433007711";
	/*getting the lengt of the key and the string*/
	keyLength = strlen(key);
	strLength = strlen(str);

	for (i = 0; i < keyLength; i++)
	{
		for (j = 0; j < strLength; j++)
		{
			/*mapping*/
			if (str[j] == key[i])
				str[j] = value[i];
		}
	}
	return (str);
}
