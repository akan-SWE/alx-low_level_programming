#ifndef MAIN_H
#define MAIN_H

/* System headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - Output a single character
 *
 *
 * @c: character to output
 *
 * Return: The output
 */
int _putchar(char c);

/**
 * _strcat - concatenates two string
 *
 * @dest: first string
 * @src: second string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate n number of character
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: length of character to concatenate
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copy n number of character from source to dest
 *
 * @dest: destination
 * @src: source
 * @n: number of character to copy
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two string together
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse the value of an array
 * @a: the array to reverse
 * @n: the size
 * Return: void (nothing)
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - convert lowercase string to uppercase
 *
 * @s: the string to be converted
 *
 * Return: the converted string
 */
char *string_toupper(char *s);

char *cap_string(char *);

/**
 * leet - changes character to their leet code representation
 *
 * @str: the string
 *
 * Return: leet coded string
 */
char *leet(char *str);

/**
 * _atoi - Converts a string to an integer
 *
 * @string: The string to convert
 *
 * Return: The integer
 */
int _atoi(char *string);

/**
 * infinite_add - Adds two numbers
 *
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result of the additon
 *
 * @size_r: The number of element to store in the buffer
 *
 * Return: The result of the addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * store - Collects an integer and stores it inside a string
 *
 * @r: The string that the number will be stored
 * @sum: Number that contains the result of the added string
 *
 * Return: A pointer of the string
 */
char *store(char *r, int sum);

/**
 * num_length - Number of digits
 *
 * @num: The number
 *
 * Return: The derived length
 */
int num_length(int num);

#endif /* MAIN_H */
