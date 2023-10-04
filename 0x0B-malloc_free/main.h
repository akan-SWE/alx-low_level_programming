#ifndef MAIN_H
#define MAIN_H

/*system header*/
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define STRING_SIZE 25
#define NULL_BYTE 1

/**
 * create_array - creates an array of char
 * and initialize it with a specific value
 *
 * @size: size of the array
 * @c: character to initialize to
 *
 * Return:
 *  - NULL if @size = 0
 *  - A pointer to the array
 *  - NULL if it failes
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - create a copy of the string @str
 *
 * @str: the string to create a copy from
 *
 * Return:
 * - A pointer to a new string, that is a copy of @str
 * - NULL is @str = NULL
 * - NULL for failed memory allocation
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates string @s1 to s2
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer of the concatenated string, otherwise NULL on failue
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - creates a 2 dimentional array
 *
 * @width: the width or number of rows
 * @height: the height or number of columns
 *
 * Return:
 * - A pointer to the 2 dimentional array
 * - NULL if @width or @height is 0
 * - NULL on failure
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by alloc_grid function
 *
 * @grid: A pointer to the grid
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height);

#endif /*MAIN_H*/
