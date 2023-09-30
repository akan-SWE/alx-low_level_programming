#ifndef MAIN_H
#define MAIN_H

/* system header */
#include <stdlib.h>

/**
 * _memset - fill memory with a constant character
 *
 * @s: destination string
 * @b: the character to fill with
 * @n: number of blocks to fill
 *
 * Return: a pointer of the string
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy memory area;
 *
 * @dest: destination string to copy to
 * @src: string to be copied to destination string
 * @n: number of characters to copy
 *
 * Return: a pointer, dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - checks for any occurence of c in the string
 * and return a pointer to the first occurrence
 *
 * @s: the string
 * @c: the character to check for in the string
 *
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c);

#endif /* MAIN_H */
