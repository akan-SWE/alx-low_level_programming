#ifndef MAIN_H
#define MAIN_H


/* system headers */
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Print a string recursively, followed by a new line.
 * @s: The string to print.
 * Return: void.
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - Prints the reverse of a string recursively.
 * @s: The string to reverse and print.
 * Return: void.
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion -  Calculates the length of a string recursively.
 * @s: The string for which to find the length.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s);

/**
 * factorial - Computes the factorial of a number recursively.
 * @n: The number for which to calculate the factoirial.
 * Return: The factorial of the number.
 */
int factorial(int n);

/**
 * _pow_recursion - Computs 'x' raised to the power of 'y' recursively.
 * @x: The base Value.
 * @y: The exponent Value.
 * Return: The result of 'x' raised to the power of 'y'.
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively.
 * @n: The number for which to find the square root.
 * Return: The natural square root of the number if it exits, otherwise -1.
 */
int _sqrt_recursion(int n);

/**
 * sqrt_helper - a helper function
 * to get the square root of the number
 *
 * @n: the number
 * @sqrt: the guess of the square root
 *
 * Return: guess (square root) if it a natural square root
 * -1 otherwise
 */
int sqrt_helper(int n, int sqrt);

/**
 * is_prime_number - Calls the prime_helper to check for a prime number
 *
 * @n: The number to check for primality
 * 
 * Return: 0 if the number is less than 1, otherwise return prime_helper
 */
int is_prime_number(int n);


/**
 * prime_helper - a helper function
 * to check for a prime number recursively
 *
 * @n: The number to check for primality
 * @count: Used to check if the number is a prime
 *
 * Return: 1, if it a prime and 0 otherwise
 */
int prime_helper(int n, int count);

/**
 * is_palindrome - checks if string is a palindrome.
 *
 * The function checks if string is palindrome by utilizing
 * the rev_and_compare function.
 *
 * @s: The input string to check for palindrome.
 *
 * Return: the result of the rev_and_compare function
 * (1 if palindrome, 0 otherwise)
 */

int is_palindrome(char *s);

/**
 * rev_and_compare - Reverses the string and compare.
 *
 * This function reverses a string and compares it will it original string
 * as long as it remains the same it returns 1, 0 otherwise.
 *
 * @s: The string to reverse and compare.
 * @clone: a copy of the original string to prevent changes during recursion.
 * @i: Current index.
 * @length: The length of the string.
 *
 * Return: 1 if it a palindrome and 0 otherwise.
 */
int rev_and_compare(char *s, char *clone, int i, int length);
#endif /*MAIN_H*/
