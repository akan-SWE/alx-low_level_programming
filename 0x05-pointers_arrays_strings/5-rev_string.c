#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string to reverse
 *
 * Return: void (Nothing)
 */

void rev_string(char *s)
{
	int j, length;
	char *start_of_string, *end_of_string, temp;

	length = 0;
	for (j = 0; *(s + length) != '\0'; j++)
	{
		length++;
	}

	/* store the memory location of s, which is also the first element */
	start_of_string = s;
	/* stores the memory location of the last element of s */
	end_of_string = s + (length - 1);

	while (start_of_string < end_of_string)
	{
		temp = *start_of_string;

		*start_of_string = *end_of_string;
		*end_of_string = temp;

		start_of_string++;
		end_of_string--;
	}
}
