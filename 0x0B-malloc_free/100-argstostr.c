#include "main.h"

/**
 * argstostr - concatenates all the argument passed
 * with each string seperated by a newline in the string
 *
 * @ac: number of argument
 * @av: Argument that is passed
 *
 * Return: a pointer of the new concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *pArray;
	int size, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* total size */
	for (size = 0, i = 0; i < ac; i++)
		size += strlen(av[i]);

	/* Allocating memory for the 1D of each argument, a newline and null byte */
	pArray = malloc((size + ac + NULL_BYTE) * sizeof(char));

	/* Memory allocation failed */
	if (pArray == NULL)
		return (NULL);

	/* Placing each argument value in the pArray and seperating by a new line */
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < (int)strlen(av[j]); k++)
		{
			pArray[i] = av[j][k];
			i++;
		}
		pArray[i] = '\n';
		i++;
	}
	pArray[i] = '\0'; /* Reserved a byte for null-terminator */

	return (pArray);
}

