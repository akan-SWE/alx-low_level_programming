#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: array of strings or pointers
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	add_positive_num(argc, argv);
	return (0);
}

/**
 * add_positive_num - add postive numbers
 *
 * @argc: number of argument passed
 * @argv: argument passed or number
 *
 * Return: 1, if any of the argument is not a number, otherwise 0
 */
int add_positive_num(int argc, char *argv[])
{
	int x, add;

	add = 0;
	for (x = 1;  x < argc; x++)
	{
		if (_isdigit(argv[x]))
			add += atoi(argv[x]);
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", add);
	return (0);
}

/**
 * _isdigit - checks if a string is a number
 *
 * @string: The string to check
 *
 * Return: 1 if it a number and 0 otherwise
 */
int _isdigit(char *string)
{

	while (*string)
	{
		if (!(*string > 47 && *string < 58)) /* not a digit */
			return (0);

		string++;
	}

	return (1); /* A digit */
}
