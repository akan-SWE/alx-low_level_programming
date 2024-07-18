#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>


int jump_search(int *, size_t, int);
int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
void print_array(int *, size_t, size_t);
int interpolation_search(int *, size_t, int);

#endif /* SEARCH_ALGOS_H_ */
