#include <stdio.h>

/**
 * main - Entry point for the progam
 *
 * Description: print all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}

	putchar('\n');
	return (0);
}

/*
 * TODO: PSEUDOCODE
 *
 * START
 * Initialize number = 0
 *
 * WHILE number < 10
	 *	output number
	 *	output comma
	 *	outup blank-space

	 *	if number == 9
	 *		output number
 *
 * END WHILE
 *
 * END
 */
