#include "main.h"

/**
 * print_binary_helper - Prints a number in binary
 *
 * @n: The number to print
 *
 * Return: void (Nothing)
 */
void print_binary_helper(unsigned long int n)
{
	/* Base case */
	if (n == 0)
		return;

	/* recursive case */
	print_binary_helper(n >> 1);

	/* Compare the least significant byte and print before popping */
	if (n & 1)
		printf("1");
	else
		printf("0");
}
/**
 * print_binary - Print 0 if 0 is the only digit passed otherwise
 * call the helper function to print the number in binary
 *
 * @n: The number to print in binary
 *
 * Return: void (Nothing)
 */
void print_binary(unsigned long int n)
{
	/* When 0 is passed to the function */
	if (n == 0)
	{
		printf("0");
		return;
	}

	print_binary_helper(n);
}
