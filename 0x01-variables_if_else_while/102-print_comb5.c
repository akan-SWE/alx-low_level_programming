#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit, fourth_digit;

	for (first_digit = 0; first_digit <= 3; first_digit++)
	{

		for (second_digit = first_digit + 1; second_digit <= 4;
		     second_digit++)
		{

			for (third_digit = 0; third_digit <= 5; third_digit++)
			{

				for (fourth_digit = third_digit + 1;
				     fourth_digit <= 6; fourth_digit++)
				{

					/* first two digits */
					putchar(first_digit + '0');
					putchar(second_digit + '0');
					putchar(' ');

					/* second two digits */
					putchar(third_digit + '0');
					putchar(fourth_digit + '0');
					if (third_digit != 5)
						putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

/**
 * TODO: PSEUDOCODE
 *
 * START
 * Declare first_digit, second_digit, third_digit, fourth_digit
 *
 * FOR LOOP
 * Set first_digit = 0
 * first_digit <= 3
 * Increment first_digit by 1
 *
	 * FOR LOOP
	 * Set second_digit = first_digit + 1
	 * second_digit <= 4
	 * Increment second_digit by 1
	 *
		 * FOR LOOP
		 * Set third_digit = 0
		 * third_digit <= 5
		 * Increment third_digit by 1
			 *
			 * FOR LOOP
			 * Set fourth_digit <= 6
			 * Increment fourth_digit by 1
			 *
				 * Output first_digit
				 * Output second_digit
				 * Output a blank-line
				 *
				 * Output third_digit
				 * Output fourth_digit
				 * IF first_digit != 3
				 *
					 * Output a comma
				 * END IF
			*END FOR
		* END FOR
	* END FOR
*END FOR
Output a new-line
END

 */
