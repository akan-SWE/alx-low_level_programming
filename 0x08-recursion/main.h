#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

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
 * is_prime_number - Checks if a number is prime recursively.
 * @n: The number to check for primality.
 * Return: 1 if the input number is a prime number, 0 otherwise.
 */
int is_prime_number(int n);

#endif /*MAIN_H*/
