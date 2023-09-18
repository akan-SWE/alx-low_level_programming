#include "main.h"

/**
 * main - Entry point for the program
 *
 * @argc: number of argument passed
 * @argv: the argument recieved
 *
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{

	/*calling the function*/
	print_arg(argc, argv);
	return (0);
}

/**
 * print_arg - print arguments recieved
 *
 * @argc: numer of argument passed
 * @argv: the argument recieved
 *
 * Return: void (Nothing)
 */
void print_arg(int argc, char *argv[])
{
	int i;
	/*print each string in the pointer array*/
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
