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

	mul(argc, argv);
	return (0);
}

/**
 * mul - multplies two numbers
 *
 * @argc: number of argument passed
 * @argv: argument passed
 *
 * Return: 1, if argc the program does not recieve two argument, otherwise 0
 */
int mul(int argc, char *argv[])
{
	int mul, i, argument_limit;

	mul = 1;
	/*3 because of the first argument that is the program name*/
	argument_limit = 3;
	/*allows program to recieves only two argument*/
	if (argc < argument_limit || argc > argument_limit)
	{
		printf("Error\n");
		return (1);
	}
	/*multiply first argument to the second argument*/
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);

	printf("%d\n", mul);
	return (0);
}
