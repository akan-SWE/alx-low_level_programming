#include "main.h"
#include <stdio.h>

/** 
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{

	int r;

    r = wildcmp("akan", "a*n");
    printf("%d\n", r);
	return (0);
}
