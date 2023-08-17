#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: output the result
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	print_fibonnacci();
	return (0);
}

/**
 * print_fibonnacci - print the first 50 fibonnacci from 1 and 2
 *
 * Return: void
 */
void print_fibonnacci(void)
{

	long int i, j, carry;
	int count;

	i = 1;
	j = 2;
	count = 1;
	while (count <= 50)
	{

		carry = i + j;

		if (i < j)
		{
			if (count != 50)
				printf("%ld, ", i);
			i = carry;
		}
		else if (j > i)
		{
			if (count != 50)
				printf("%ld, ", j);
			j = carry;
		}
		else
		{
			if (count != 50)
				printf("%ld, ", j);
			else
				printf("%ld\n", j);
			j = carry;
		}
		count++;
	}
}
