#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stdlib.h>

void print_name(char *name, void (*f) (char *));
void array_iterator (int *arr , size_t size, void (*action) (int));
int int_index (int *arr , size_t size, int (*cmp) (int));



#endif
