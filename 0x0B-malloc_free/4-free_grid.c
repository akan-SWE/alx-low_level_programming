#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by alloc_grid function
 *
 * @grid: A pointer to the grid
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Freeing the 1D array */
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
