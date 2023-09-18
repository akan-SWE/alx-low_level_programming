#ifndef MAIN_H
#define MAIN_H

/*system headers*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*Function prototypes*/


/**
 * print_program_name - Print the program name
 *
 * @argc: number of argument
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_program_name(int __attribute__ ((unused)) argc, char *argv[]);

/**
 * print_arg_count - prints number of argument
 *
 * @argc: number of arguments passed
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_arg_count(int argc, char __attribute__ ((unused)) *argv[]);

/**
 * print_arg - print arguments recieved
 *
 * @argc: numer of argument passed
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_arg(int argc, char *argv[]);

/**
 * mul - multplies two numbers
 *
 * @argc: number of argument passed
 * @argv: argument passed
 *
 * Return: 1, if argc the program does not recieve two argument, otherwise 0
 */
int mul(int argc, char *argv[]);

/**
 * add_positive_num - add postive numbers
 *
 * @argc: number of argument passed
 * @argv: argument passed or number
 *
 * Return: 1, if any of the argument is not a number, otherwise 0
 */
int add_positive_num(int argc, char *argv[]);

/**
 * calculate_min_coins - Calculate the minimum number of coins
 * required to make change for a given amount of money.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of arguments passed to the program.
 *
 * Return:
 *   -  0: If the program runs successfully.
 *   -  1: If argc is not equal to 2.
 *   - -1: If the argument number (amount of money) is negative.
 */
int calculate_min_coins(int argc, char *argv[]);
#endif /*MAIN_H*/
