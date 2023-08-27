#include "main.h"

/**
 * _strcmp - compare two string together
 * @str1: first string
 * @s2: second string
 *
 * Return: result
 */

int _strcmp(char *str1, char *s2)
{
	int result, i;

	i = 0;
	while (str1[i] != '\0' || s2[i] != '\0')
	{
		if (str1[i] == s2[i])
		{
			result = 0;
			i++;
		}
		else if (str1[i] > s2[i])
		{
			result = str1[i] - s2[i];
			break;
		}
		else if (str1[i] < s2[i])
		{
			result = str1[i] - s2[i];
			break;
		}
	}

	return (result);
}
