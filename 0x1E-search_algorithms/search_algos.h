#ifndef _SEARCH_ALGO
#define _SEARCH_ALGO
/* Standard Libraries */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced exercises */
int jump_search(int *array, size_t size, int value);
int min(int a, int b);
int max(int a, int b);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int rec_bin_adv(int *array, size_t left, size_t right, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* _SEARCH ALGO */
