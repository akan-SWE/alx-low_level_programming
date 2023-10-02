#include "main.h"
#include <stdio.h>

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
	print_arg(argc, argv);

	return (0);
}
/**
 * print_arg - print arguments recieved
 *
 * @argc: numer of argument passed
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_arg(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
