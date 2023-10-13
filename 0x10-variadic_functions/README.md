# 0x10. C - Variadic functions

## Table Of Content

Project files

- [0-sum\_them\_all.c](#sum_them_all)
- [1-print\_numbers.c](#print_numbers)
- [2-print\_strings.c](#print_strings)
- [3-print\_all.c](#print_all)

## sum\_them\_all

This function returns the sum of all its parameters.

- Prototype: **int sum\_them\_all(const unsigned int n, ...);

- If n == 0, return 0

## print\_numbers

The function prints numbers, followed by a new line.

- Prototype: **void print\_numbers(const char \*separator, const unsigned int n, ...);**
- where separator is the string to be printed between numbers

- and n is the number of integers passed to the function

- If separator is NULL, it does not print

- Prints a new line at the end of the function

## print\_strings

This function prints strings, followed by a new line.

- Prototype: **void print\_strings(const char \*separator, const unsigned int n, ...);**

- where separator is the string to be printed between the strings

- and n is the number of strings passed to the function

- If separator is NULL, it does not print

- If one of the string is NULL, it print (nil) instead

- Prints a new line at the end of the function

## print\_all

This function prints anything.

Prototype: **void print\_all(const char \* const format, ...);**

where **format** is a list of types of arguments passed to the function

- **c: char**

- **i: integer**

- **f: float**

- **s: char * (if the string is NULL, print (nil) instead**
any other char should be ignored

Prints a new line at the end of the function.
