#include "main.h"
#include <string.h>

int rev_and_compare(char *s, char *clone, int i, int length);

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
	char *clone;

	length = strlen(s);
	/*clone the string so that it does not change during recursion*/
	clone = s;

	i = 0; /*initial value of i*/
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
	char *string = clone;
	/*base case*/
	if (*s == '\0')
	{
		return (1);
	}

	/*recursive case*/
	if ((string[length - 1 - i]) == string[i])
	{
		/*checking for other index in the string*/
		return (rev_and_compare(s + 1, clone, i + 1, length));
	}
	else
		return (0);
}

