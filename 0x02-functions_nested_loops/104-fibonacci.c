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
	print_fibonnacciTwo();
	return (0);
}
/**
 * print_fibonnacciTwo - print the first 98 fibonnacci from 1 and 2
 *
 * Return: void
 */
void print_fibonnacciTwo(void)
{
	unsigned long int i, j, carry, count;

	i = 1;
	j = 2;
	count = 3;
	printf("%lu, %lu, ", i, j);
	while (count <= 99)
	{
		carry = i + j;

		if (count != 99)
			printf("%lu, ", carry);
		else
			printf("%lu", carry);
		i = j;
		j = carry;
		count++;
	}
	putchar('\n');
}
