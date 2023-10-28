#ifndef MAIN_H_
#define MAIN_H_

/* System headers */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Alias */
typedef unsigned int u_int;

/* Prototypes */

/**
 * power - Raise 2 to the power of a number
 *
 * @power: The number to raise 2 by
 *
 * Return: The result of the power, 0 if the power is 0
 */
int power(u_int power);

/**
 * binary_to_uint - Converts binaries to number in base 10
 *
 * @binaries: The binaries to convert number
 *
 * Return: The number
 */
int binary_to_uint(const char *binaries);

/**
 * reverse_string - Reverse a string
 *
 * @str: The string to reverse
 *
 * Return: The reversed string
 */
char *reverse_string(const char *str);

/**
 * print_binary - Print 0 if 0 is the only digit passed otherwise
 * call the helper function to print the number in binary
 *
 * @n: The number to print in binary
 *
 * Return: void (Nothing)
 */
void print_binary(unsigned long int n);

/**
 * print_binary_helper - Prints a number in binary
 *
 * @n: The number to print
 *
 * Return: void (Nothing)
 */
void print_binary_helper(unsigned long int n);

/**
 * get_bit - Get the value of a bit at a given index
 *
 * @n: The number
 * @index: The index
 *
 * Return: The value of a bit at a given index, -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: The number
 * @index: The index
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 *
 * @n: The number
 * @index: The index
 *
 * Return: 1 for success, otherwise -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Calculate the number of bits needed to flip from one number to another
 * *
 *
 * @n: The number to flip to
 * @m: The number we are checking for differences
 *
 * Return: The number of bit flips needed to get to @n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif /* MAIN_H_ */
