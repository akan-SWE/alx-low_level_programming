#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 *
 * Description: prints the last digit of any random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = (n % 10);
	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		puts("and is greater than 5");
	else if (last_digit == 0)
		puts("and is 0");
	else if (last_digit < 6 && last_digit != 0)
		puts("and is less than 6 and not 0");

	return (0);
}
