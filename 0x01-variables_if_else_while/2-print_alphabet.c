#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char lowerCase = 'a';

	/* print the letter from 'a' to 'z'* */
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');
	return (0);
}
