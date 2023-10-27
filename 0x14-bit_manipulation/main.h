#ifndef MAIN_H_
#define MAIN_H_

/* System headers */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Alias */
typedef unsigned int u_int;

/* Prototypes */
int power(u_int power);
int binary_to_uint(const char *binary);
char *reverse_string(const char *str);

#endif /* MAIN_H_ */
