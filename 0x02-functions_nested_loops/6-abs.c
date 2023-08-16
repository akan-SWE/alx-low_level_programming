#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @value: accept a type of int and calculate the absolute value
 *
 * Return: the absolute value
 */
int _abs(int value)
{
	if (value <= 0)
	{
		return (value * -1);
	}
	else
		return (value);
}
