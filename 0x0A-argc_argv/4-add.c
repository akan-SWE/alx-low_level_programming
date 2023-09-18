#include "main.h"

/**
 * main - Entry point for the program
 *
 * @argc: number of argument passed
 * @argv: argument passed
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{

	add_positive_num(argc, argv);
	return (0);
}

/**
 * add_positive_num - add positive numbers
 *
 * @argc: number of argument passed
 * @argv: argument passed or number
 *
 * Return: 1, if any of the argument is not a number, otherwises 0
 */
int add_positive_num(int argc, char *argv[])
{
	int add, i, j;

	add = 0;

	/*print 0, and return because no number is passed*/
	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			/*argument is not digit*/
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0); /*successfully added all digit or arguments*/
}

