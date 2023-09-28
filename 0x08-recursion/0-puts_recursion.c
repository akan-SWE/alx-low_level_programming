#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Print a string recursively, followed by a new line.void 
 *
 * @s: The string to print.
 *
 * Return: void (Nothing)
 */
void _puts_recursion(char *s)
{
  putchar(*s);
  s++;
  if (*s == '\0')
    putchar('\n'); /* Print newline after the last element */

  /* Recursion stops when *s reaches null */
  if (*s > '\0')
  {
    _puts_recursion(s);
  }


}
