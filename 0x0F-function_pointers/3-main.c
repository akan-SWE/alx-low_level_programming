#include "3-calc.h"

/**
 * main - Collect command line argument
 *
 * @argc: Number of argument
 * @argv: The arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	char *operator;
	int num1, num2;
	op_t op_t;

	/* Argument must be exactly 4 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert to numbers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = (argv[2]);

	/* Store the address of the function that returned */
	op_t.f = get_op_func(operator);

	printf("%d\n", op_t.f(num1, num2));

	return (0);
}
