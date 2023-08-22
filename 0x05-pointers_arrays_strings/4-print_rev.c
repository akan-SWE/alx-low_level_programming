#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: the string
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int last_memory_block, j, index, k;

	index = 0;
	for (j = 0; *(s + index) != '\0'; j++)
	{
		index++;

		if (*(s + index) == '\0')
		{
			last_memory_block = (index - 1);

			for (k = last_memory_block;
			     *(s + last_memory_block) != 0; k--)
			{
				_putchar(*(s + last_memory_block));
				last_memory_block--;
			}
		}
	}
	_putchar('\n');
}
