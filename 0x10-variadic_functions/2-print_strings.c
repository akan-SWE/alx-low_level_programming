#include "variadic_functions.h"

/**
 * print_strings - prints string
 *
 * @separator: separator to print after each string
 * except the last string
 * @n: The number of argmument to collect
 *
 * Return: void (Nothing)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	String string;
	size_t i;
	va_list args;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		string = va_arg(args, String);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
