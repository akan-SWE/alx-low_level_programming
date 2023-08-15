#include "main.h"
#include <unistd.h>

/**
 * main - Entry point for the program
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_putchar("_putchar\n");
	return (0);
}

/**
 * print_putchar - Writes data to standard output.
 *
 * @_putchar: Pointer to a character array containing data to be written.
 *
 * Return: The number of characters written (sucess)
 */
int print_putchar(char *_putchar)
{

	return (write(1, _putchar, (sizeof(_putchar) + 1)));
}
