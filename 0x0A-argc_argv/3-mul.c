#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: array of strings or pointers
 *
 * Return: 0 (Success)
 */
#include <stdio.h>
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
	int mul, i;

	/* Return, if 2 argument are not recieved */
	if (argc != 3) /* 3 because of the program name as the first argument */
	{
		printf("Error\n");
		return (1);
	}

	mul = 1;
	for (i = 1; i < argc; i++) /* excluding the program name with 1 */
		mul *= atoi(argv[i]);

	printf("%d\n", mul);
	return (0);
}
