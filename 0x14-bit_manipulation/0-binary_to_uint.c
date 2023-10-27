#include "main.h"

/**
 * convertToNumber - Converts binaries to number in base 10
 *
 * @binaries: The binaries to convert number
 *
 * Return: The number
 */
int convertToNumber(const char *binaries)
{
	u_int number, i;
	char *rev_binary;


	rev_binary = reverse_string(binaries); /* Reverse the binary number */

	i = 0, number = 0;
	while (rev_binary[i])
	{

		u_int convert =  rev_binary[i] - '0'; /* Convert binary to number */

		if ((convert != 0 && convert != 1))
		{
			free(rev_binary);
			return (0); /* Not a binary number */
		}

		number += (convert * (power(i))); /* Convert the binary to decimal */
		i++;
	}

	free(rev_binary);
	return (number);
}

/**
 * power - Raise 2 to the power of a number
 *
 * @power: The number to raise 2 by
 *
 * Return: The result of the power, 0 if the power is 0
 */
int power(u_int power)
{
	u_int i, result;


	if (power == 0)
		return (1);

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= 2;
		i++;
	}

	return (result);
}

/**
 * reverse_string - Reverse a string
 *
 * @str: The string to reverse
 *
 * Return: The reversed string
 */
char *reverse_string(const char *str)
{
	char *rev_string;
	int i, j;

	j = (strlen(str) - 1);

	i = 0;

	rev_string = malloc(strlen(str));

	while (j >= 0)
	{
		rev_string[j] = str[i];
		i++;
		j--;
	}

	return (rev_string);
}
