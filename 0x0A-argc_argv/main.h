#ifndef MAIN_H
#define MAIN_H

/*system headers*/
#include <stdio.h>
#include <stdlib.h>
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
 * print_noOfArg - prints number of argument
 *
 * @argc: number of arguments passed
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_noOfArg(int argc, char *argv[]);

/**
 * print_arg - print arguments recieved
 *
 * @argc: numer of argument passed
 * @argv: the argument
 *
 * Return: void (Nothing)
 */
void print_arg(int argc, char *argv[]);


#endif /*MAIN_H*/
