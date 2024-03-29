#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
#endif
/*
 * print_putchar - print the sets of characters
 */
int print_putchar(char *_putchar);

/**
 *_putchar - Writes data to standard output.
 *
 * @character: Pointer to a character array containing data to be written.
 *
 * Return: The number of characters written (success)
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabet in lowercase 'a' to 'z' 10 times
 * Return: void
 */
void print_alphabet_x10(void);

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
 * print_sign - print the sign of a number(negative, positive, zero)
 *
 * @n: parameter type
 *
 * Return: '1' if greater than zero, '0' is zero, '-1' is less than zero
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 *
 * @param: accespt a type of int
 *
 * Return: the absolute value
 */
int _abs(int);

/**
 * print_last_digit - print the last digit of a number
 *
 * @number: the number is passed to the function to get the last digit
 *
 * Return: lastDigit
 */
int print_last_digit(int);

/**
 * jack_bauer - print every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59
 *
 * @void: no parameter needed
 *
 * Return: void;
 */
void jack_bauer(void);

/**
 * times_table - print the 9 times table, starting from 0
 *
 * Return: void (empty)
 */
void times_table(void);
/**
 * add - adds two integers
 *
 * @first: first integer to be added
 * @second: second integer to be added
 *
 * Return: result
 */
int add(int first, int second);

/**
 * print_to_98 - print natural numbers to 98
 *
 * @n: natural number starting point
 *
 * Return: (void)
 */
void print_to_98(int n);

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: this is the times table value limit
 *
 * Retun: void
 */
void print_times_table(int n);

/**
 * sum_of_naturalNumber - print the sum of natural number below 1024
 *
 * Return: void
 */
void sum_of_naturalNumber(void);

/**
 * print_fibonnacci - print the first 50 fibonnacci from 1 and 2
 *
 * Return: void
 */
void print_fibonnacci(void);

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence that do not exceed 4,000,000.
 *
 * Return: Always 0 (success)
 */
void print_even_fibonacci(void);

/**
 * print_fibonnacci - print the first 98 fibonnacci from 1 and 2
 *
 * Return: void
 */
void print_fibonacci_To_98(void);
