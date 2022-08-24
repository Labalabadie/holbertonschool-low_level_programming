#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_binary_search(int *array, int left, int right);
int binary_search_aux(int *array, int left, int right, int value);
#endif
