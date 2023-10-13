#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of argument passed to the function
 * - c: character
 * - i: integer
 * - f: float
 * - s: char * (if the strings is null, print (nil)) instead
 *
 * - skips every other character that does not match the
 *   format or character specified above
 *
 *   Return: void (Nothing)
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator;
	va_list args;

	/* Structure maps format to it corresponding function */
	s_h speciferHandler[] = {
		{'c', print_chars},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(args, format);

	separator = ", ";
	i =  0;
	/* Check each until null, only print if it matches the format specifier */
	while (format[i] != '\0')
	{
		j = 0;
		/* Each character are checked to see if there match with any specifier */
		while (speciferHandler[j].handler_ptr)
		{
			if (format[i] == speciferHandler[j].format)
			{
				speciferHandler[j].handler_ptr(args);
				/* Don't print the separator last */
				if (format[i + 1] != '\0')
					printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}

/**
 * print_string - prints strings
 *
 * @args: The argument passed
 *
 * Return: void (Nothing)
 */
void print_string(va_list args)
{
	String string;

	string = va_arg(args, String);

	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);
}

/**
 * print_integer - prints integer
 *
 * @args: The argument passed
 *
 * Return: void (Nothing)
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print floating point numbers
 *
 * @args: The argument passed
 *
 * Return: void (Nothing)
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_chars - prints characters
 *
 * @args: The argument passed
 *
 * Return: void (Nothing)
 */
void print_chars(va_list args)
{
	printf("%c", va_arg(args, int));
}
