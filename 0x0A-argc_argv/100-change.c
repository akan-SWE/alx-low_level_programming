#include "main.h"
#define EXPECTED_ARGC 2

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: array of strings or pointers
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
	int i, cents, coinCount, NumOfelement;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != EXPECTED_ARGC)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]); /* convert to number */

	NumOfelement = sizeof(coins) / sizeof(coins[5]);
	i = 0, coinCount = 0;
	while (i < NumOfelement)
	{
		if (cents != 0)
		{
			if (cents >= coins[i])
			{
				cents -= coins[i];
				coinCount++;
				i = 0;
			}
			else
				i++;
		}
		else
			break;
	}

	printf("%d\n", coinCount);
	return (0);
}
