#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: print all possible combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int first_digit, second_digit, third_digit;

	for (first_digit = 0; first_digit <= 7; first_digit++)

		for (second_digit = first_digit + 1; second_digit <= 8;
		     second_digit++)
		{

			for (third_digit = second_digit + 1; third_digit <= 9;
			     third_digit++)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				putchar(third_digit + '0');

				if (first_digit != 7)
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
 * Declare first_digit, second_digit, third_digit
 *
 * START
 *
 * FOR LOOP
 * Set first_digit = 0
 * first_digit <= 7
 * Increment first_digit by 1
 *
	 * FOR LOOP
	 * set second_digit = first_digit + 1
	 * second_digit <= 8
	 * Increment second_digit by 1
	 *
		 * FOR LOOP
		 * set third_digit = second_digit + 1
		 * third_digit <= 9
		 * Increment third_digit by 1
		 *
			 * Output first_digit
			 * Output second_digit
			 * Output third_digit
			 *
			 * IF first_digit != 7
				 * Output a comma
				 * Output a blank-space
				END IF
			END FOR
		END FOR
	END FOR

	Output a new-line

	END
 */
