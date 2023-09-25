#include "main.h"

/**
 * _strcmp - compare two string together
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int result, i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			result = 0;
			i++;
		}
		else if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}
