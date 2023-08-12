#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: print all lowercase letter except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'e' || lowerCase == 'q')
		{
			lowerCase++;
			continue;
		}
		else
		{
			putchar(lowerCase);
			lowerCase++;
		}
	}
	putchar('\n');
	return (0);
}
