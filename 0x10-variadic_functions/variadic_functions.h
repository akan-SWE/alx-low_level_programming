#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef char *String;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);



void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct specifierHandler - a structure that maps the format specifier
 * to the corresponding function
 *
 * @format: The key of character
 * @handler_ptr: The value or function to call
 */
typedef struct specifierHandler
{
	char format;
	void (*handler_ptr)(va_list args);
} s_h;

void print_string(va_list args);

void print_integer(va_list args);

void print_float(va_list args);

void print_chars(va_list args);
#endif /* VARIADIC_FUNCTION_H */

