#include "function_pointers.h"

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
	unsigned char *pMain = (unsigned char *)main;

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
		printf("%02x ", pMain[i]);

	putchar('\n');
	return (0);
}
