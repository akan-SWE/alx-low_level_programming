#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: prints lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase = 'z';

	while (lowerCase >= 'a')
	{
		putchar(lowerCase);
		lowerCase--;
	}
	putchar('\n');
	return (0);
}
