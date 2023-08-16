#ifndef MAIN_H
#define MAIN_H
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

void times_table(void);
