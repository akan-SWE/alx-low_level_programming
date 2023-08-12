#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int first_digit, second_digit;

	for (first_digit = 0; first_digit <= 8; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9;
		     second_digit++)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');

			if (first_digit != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

/*
 * TODO: PSEUDOCODE
 *
 * declare fist_digit, second_digit;
 *
 *START

 *FOR LOOP
 *set first_digit = 0
 *first_digit <= 8
 *increment by 1
 *
	*FOR LOOP
	*set second_digit = first_digit + 1
	*second_digit <= 9
	*increment by 1
		 *Output first_digit
		 *Output second_digit
		 *
		 *IF first_digit != 8
			 *Output comma
			 *Output a blank space
		 *END IF
	*END FOR
 *
 *END FOR
 *
 *Output a newline
 *END
 */
