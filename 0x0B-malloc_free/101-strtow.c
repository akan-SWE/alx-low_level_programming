#include "main.h"
#include <stdio.h>

/**
 * getRows - get the number of pointer to refer to the 1D array each
 *
 * @str: the string
 *
 * Return: The number of rows
 */
int getRows(char *str)
{

	int rows;

	rows = 0;
	while (*str)
	{

		/* Getting the number of words in the string */
		if (*(str) != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
			rows += 1;

		str++;
	}

	return (rows);
}

/**
 * alloc_grid_string - allocate memory for the grid
 *
 * @str: The string
 *
 * Return: The allocated grid
 */
char **alloc_grid_string(char *str)
{

	char **string_grid;
	int cols, rows, i, j;

	rows = getRows(str);

	string_grid = malloc((rows  + NULL_BYTE) * sizeof(char));

	if (string_grid == NULL)
		return (NULL);

	cols = 0;
	i = 0;
	while (*str)
	{

		while (*str == ' ')
			str++;

		while (*str != ' ' && *str != '\0')
		{
			cols += 1;
			str++;
		}

		string_grid[i] = malloc((cols + NULL_BYTE) * sizeof(char));
		i++;

		/* Memory allocating failed */
		if (string_grid == NULL)
		{
			for (j = 0; j < i; j++)
				free(string_grid[i]);
			return (NULL);
		}

		cols = 0;
	}

	return (string_grid);
}

/**
* strtow - fills the individual character in the grid
* one word per array
*
* @str: The string
*
* Return: The new string grid
*/
char **strtow(char *str)
{
	char **string_grid;
	int i, j, k;

	string_grid = alloc_grid_string(str);
	i = 0;
	k = 0;
	while (str[k] != '\0')
	{

		if (str[k] == ' ')
		{
			k++;
			continue;
		}

		j = 0;
		while (str[k] != ' ' && str[k] != '\0')
		{

			string_grid[i][j] = str[k];
			j++;
			k++;
			if (str[k + 1] == ' ' || str[k + 1] == '\0')
				string_grid[i][j] = '\0';
		}

		if (str[k] == '\0')
			break;

		if (str[k + 1] != ' ' && str[k] != '\0')
			i++;
	}

	string_grid[i + 1] = NULL;
	return (string_grid);
}

