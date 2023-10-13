#include "variadic_functions.h"


/**
 * print_numbers - prints numbers
 *
 * @separator: The separator for each number
 * @n: The number of argmument to collect
 *
 * Return: void (Nothing)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(args, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
