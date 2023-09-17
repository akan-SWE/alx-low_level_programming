#include "main.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 (Success)
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{

	print_program_name(argc, argv);
	return (0);
}

/**
 * print_program_name - Print the program name
 *
 * @argc: number of argument
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_program_name(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
}
