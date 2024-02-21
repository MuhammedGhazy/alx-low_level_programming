#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - struct op
 *
 * @op: the opreator 
 *
 * @f: the function associated
*/
typedef struct op
{
	char *op;
	int (*f) (int a, int b);
}op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_moud(int a, int b);

int (*get_func_op (char *s))(int, int);

#endif
