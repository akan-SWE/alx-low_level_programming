#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - print Fizz for multiple of three, Buzz for multiple of five and
 * Fizz Buzz for both multiple of three and five
 *
 * Return: void
 *
 */
void fizz_buzz(void)
{

	short number = 1;

	for (number = 1; number <= 100; number++)
	{
		if (number % 15 == 0)
			printf("FizzBuzz ");
		else if (number % 5 == 0)

			if (number != 100)
				printf("Buzz ");
			else
				printf("Buzz");

		else if (number % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", number);
	}
	printf("\n");
}
/**
 * main - Entry point
 *
 * Description: Output the result of the function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	fizz_buzz();
	return (0);
}

/*
 *
 *
 *
 * Declare number
 *
 * FOR LOOP
 * number = 1
 * number <= 100
 * Increment number by 1
 *
 * IF
 * number % 3 == 0
 * print "Fizz "
 * ELSE IF
 * number % 5 == 0
 * print "Buzz "
 * ELSE IF
 * number % 15 == 0
 * print "Fizz BUZZ "
 * ELSE
 * print number
 */
