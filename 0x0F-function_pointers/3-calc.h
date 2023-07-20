#ifndef _CALC_H_
#define _CALC_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */


typedef struct op
{
	char *op;
	int (*f)(int z, int w);
} op_t;

int op_add(int z, int w);
int op_sub(int z, int w);
int op_mul(int z, int w);
int op_div(int z, int w);
int op_mod(int z, int w);

int (*get_op_func(char *s))(int, int);

#endif
