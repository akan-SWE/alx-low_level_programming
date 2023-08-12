#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: prints alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (upperCase <= 'Z' || lowerCase <= 'z')
	{
		if (lowerCase <= 'z')
		{
			putchar(lowerCase);
			lowerCase++;
			continue;
		}

		if (upperCase <= 'Z')
		{
			putchar(upperCase);
			upperCase++;
			continue;
		}
	}
	putchar('\n');

	return (0);
}
