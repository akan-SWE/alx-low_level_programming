#include "main.h"
#define SIZE 5
#define EXPECTED_ARGC 2

/**
 * main - Entry point for the program
 *
 * @argc: number of argument passed
 * @argv: argument passed
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	calculate_min_coins(argc, argv);

	return (0);
}

/**
 * calculate_min_coins - Calculate the minimum number of coins
 * required to make change for a given amount of money.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of arguments passed to the program.
 *
 * Return:
 *   -  0: If the program runs successfully.
 *   -  1: If argc is not equal to 2.
 *   - -1: If the argument number (amount of money) is negative.
 */
int calculate_min_coins(int argc, char *argv[])
{
	int i, j, coins, number, count;

	int changeCoins[SIZE] = {25, 10, 5, 2, 1};
	/*convert to number if the argument is greater than 2*/
	if (argc >= EXPECTED_ARGC && argc <= EXPECTED_ARGC)
		number = atoi(argv[1]);
	else
	{
		puts("Error");
		return (1); /*not successful*/
	}
	/*no negative number allowed, so return*/
	if (number < 0)
	{
		puts("0");
		return (-1); /*just return no erro*/
	}

	coins = 0, count = 0;
	/*continue iteration for as long as coin is not equal to number*/
	for (i = 0; coins != number; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			/*
			 * Ensure the current coin is used only if it doesn't exceed
			 * the remaining change amount.
			 */
			if (changeCoins[j] > (number - coins))
				continue;
			else
			{
				coins += changeCoins[j];
				count++;
				break; /*check for other possible change coin*/
			}
		}
	}
	printf("%d\n", count);
	return (0); /*successful*/
}
