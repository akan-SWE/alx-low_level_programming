#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: two two-digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/* Print the first two-digit number */
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));

			putchar(' '); /* Space separator */

			/* Print the second two-digit number */
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 98 || j != 99)
			{
				putchar(','); /* Comma separator */
				putchar(' '); /* Space separator */
			}
		}
	}
	putchar('\n');

	return (0);
}
