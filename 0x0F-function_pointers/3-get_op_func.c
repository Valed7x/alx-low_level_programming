#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform.
 *
 * @s: The operator passed as an argument.
 *
 * Return: 0 NULL.
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int n;

	n = 0;

	while (ops[n].op != NULL)
	{
		if (*ops[n].op == *s)
			return (ops[n].f);
		n++;
	}
	return (0);
}
