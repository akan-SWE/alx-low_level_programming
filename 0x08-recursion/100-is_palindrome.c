#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if string is a palindrome.
 *
 * The function checks if string is palindrome by utilizing
 * the rev_and_compare function.
 *
 * @s: The input string to check for palindrome.
 *
 * Return: the result of the rev_and_compare function
 * (1 if palindrome, 0 otherwise)
 */
int is_palindrome(char *s)
{
	int i, length;
	char *clone = NULL;


	/* Need a clone so that it remains constant during recursion */
	clone = s;
	length = strlen(s);

	i = 0;
	return (rev_and_compare(s, clone, i, length));
}

/**
 * rev_and_compare - Reverses the string and compare.
 *
 * This function reverses a string and compares it will it original string
 * as long as it remains the same it returns 1, 0 otherwise.
 *
 * @s: The string to reverse and compare.
 * @clone: a copy of the original string to prevent changes during recursion.
 * @i: Current index.
 * @length: The length of the string.
 *
 * Return: 1 if it a palindrome and 0 otherwise.
 */
int rev_and_compare(char *s, char *clone, int i, int length)
{
	if (*s == '\0')
		return (1);

	if (clone[length - 1 - i] == clone[i])
		return (rev_and_compare(s + 1, clone, i + 1, length));
	else
		return (0);
}

