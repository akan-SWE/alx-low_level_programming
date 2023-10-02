#include "main.h"

#define ROWS 8
#define COLS 8

/**
* print_chessboard - prints the chessboard
*
* @a: pointer to an array
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			printf("%c", a[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}

