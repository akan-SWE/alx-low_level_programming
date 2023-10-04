#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * str_concat - Concatenates string @s1 to s2
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer of the conCatenated string, otherwise NULL on failue
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, totalSize, size1, size2;
	char *conCat;
	/*Treating NULL as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Getting the length of the strings*/
	size1 = strlen(s1);
	size2 = strlen(s2);
	totalSize = (strlen(s1) + strlen(s2));

	/*Allocate memory, including the null-terminator*/
	conCat = (char *)malloc((totalSize + NULL_BYTE) * sizeof(char));

	/*Memory allocating failed so return NULL*/
	if (conCat == NULL)
		return (NULL);

	i = 0;
	while (i < size1)
	{
		conCat[i] = s1[i]; /*Set conCat to every element of s1*/
		i++;
	}
	/*Concatenating s2 after the last element of s1*/
	j = 0;
	while (j < size2)
	{
		conCat[i] = s2[j];
		i++, j++;
	}

	conCat[i] = '\0'; /*Add a null terminator after concatenating*/
	return (conCat);
}
