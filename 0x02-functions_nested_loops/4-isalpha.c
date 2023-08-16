#include "main.h"
#include <unistd.h>

/**
 * _isalpha - check for the argument is an alphabet
 *
 * @c: parameter type
 *
 * Return: '1' if true else '0'
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
