#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function to perform the operation.
 *
 * @s: The operator as a string (e.g., "+", "-", "*", "/", "%").
 *
 * Return: A pointer to the selected function.
 * If no matching operator is found, it returns null
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL },
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *ops[i].op && (*ops[i].op != '\0'))
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
