#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: array of strings or pointers
 *
 * Return: 0 (Success)
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
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
	printf("%d\n", (argc - 1)); /* excluding the program name with -1 */
}
