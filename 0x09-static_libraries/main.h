#ifndef MAIN_H
#define MAIN_H

/*system headers*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes data to standard output.
 *
 * @c: Pointer to a character array containing data to be written.
 *
 * Return: The number of characters written (sucess)
 */
int _putchar(char c);

/**
 * _islower - check for any lowercase alphabet
 *
 * @c: parameter type
 *
 * Return: '1' if true else '0'
 */
int _islower(int c);

/**
 * _isalpha - check for the argument is an alphabet
 *
 * @c: parameter type
 *
 * Return: '1' if true else '0'
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: accept a type of int and calculate the absolute value
 *
 * Return: the absolute value
 */
int _abs(int n);

/**
 * _isupper - checks for uppercase character
 *
 * @c: formal parameter that is used for checking
 *
 * Return: '1' if true and else '0'
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit that range from '0' to '9'
 *
 * @c: Digit to be checked
 *
 * Return: '1' if @c is a digit, '0' otherwise.
 */
int _isdigit(int c);

/**
 * _strlen - returns the length of a string
 *
 * @s: string pointer parameter
 *
 * Return: Alway 0 (Success)
 */
int _strlen(char *s);

/**
 * _puts - print string to standard output
 *
 * @s: string
 *
 * Return: void
 */
void _puts(char *s);

/**
 * _strcpy - copies the string pointed by src,
 * including the terminating null to dest
 *
 * @dest: buffer to which the string is copied to
 * @src: the string
 *
 * Return: store
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert a string to a number
 * @s: the string to convert
 * Return: the number
 */
int _atoi(char *s);

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
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2);

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

/**
 * _strspn - calculates  the length (in bytes) of the initial segment of s
 * which consists entirely of bytes in accept.
 *
 * @s: the initial string
 * @accept: string that will be checked
 *
 * Return: count;
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - checks for any matches in the both string
 * and returns a pointer of the character
 *
 * @s: the first string
 * @accept: the second string
 *
 * Return: a pointer to the character in s, Otherwise return NULL if no match
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - check if the string in needle matches are any substring
 * in haystack
 *
 * @haystack: needle will check this string if the substring is present
 * @needle: the string that will be checked
 *
 * Return: haystack if needle it empty, a pointer to a character if it matches
 * and NULL if no matches
 */
char *_strstr(char *haystack, char *needle);

#endif /*MAIN_H*/
