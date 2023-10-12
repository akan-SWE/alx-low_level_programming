#ifndef CALC_H
#define CALC_H

/* system headers */
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op -Struct op
 *
 * @op: The operator
 * @f: The funciton associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


/**
 * op_add - add to integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Their sum
 */
int op_add(int a, int b);

/**
 * op_sub - subtract two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Their difference
 */
int op_sub(int a, int b);

/**
 * op_mul - multiply two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Their product
 */
int op_mul(int a, int b);

/**
 * op_div - division two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: The result of the division
 */
int op_div(int a, int b);

/**
 * op_mod - remainder two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);
#endif /* CALC_H */
