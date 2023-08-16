#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _islower - check for any lowercase alphabet
 *
 * @c: parameter type
 *
 * Return: '1' if true else '0'
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
