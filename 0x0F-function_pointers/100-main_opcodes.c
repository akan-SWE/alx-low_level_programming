#include "function_pointers.h"
#include <stdio.h>

/**
 * main - Prints opcodes
 *
 * @argc: The number of argument
 * @argv: The argments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, num_of_bytes;
	unsigned char *pMain;

	pMain = (unsigned char *)main;

	if (argc != NUMOFARG)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < ZERO)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x", (pMain[i]));
		if (i != (num_of_bytes - 1))
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
