#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimentional array
 *
 * @width: the width or number of rows
 * @height: the height or number of columns
 *
 * Return:
 * - A pointer to the 2 dimentional array
 * - NULL on failure
 * - NULL if @width or @height is 0
 */
int **alloc_grid(int width, int height)
{
	int i, k, j, **grid_array;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Create pointers of the fixed height */
	grid_array = malloc(height * sizeof(int *));

	/* Memory allocation failed, hence return */
	if (grid_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* The pointers created, will point, to a 1D array each */
		grid_array[i] = malloc(width * sizeof(int));

		if (grid_array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid_array[k]);

			free(grid_array);
			return (NULL);
		}
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid_array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid_array); /* The grid*/
}

