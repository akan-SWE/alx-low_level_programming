#include "main.h"
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	print_arg_count(argc, argv);

	return (0);
}

/**
 * print_arg_count - prints number of argument
 *
 * @argc: number of arguments passed
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_arg_count(int argc, char __attribute__ ((unused)) *argv[])
{

	if (argc > 0)
		printf("%d\n", argc - 1);
	else
		printf("0");
}

