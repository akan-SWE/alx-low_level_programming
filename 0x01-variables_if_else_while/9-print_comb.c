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
 * Set number = 0
 *
 *WHILE number < 10
 *Output number
 *
 *IF number != 9
 *Output comma
 *Output a blank-space
 *END IF
 *Increment number by 1
 *END WHILE
 *
 *Output a new-line
 * END
 */
