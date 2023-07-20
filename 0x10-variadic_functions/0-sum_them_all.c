#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - sums all the int arguments.
 *
 * @n: number of arguments.
 *
 * Return: sum of its parameters.
 */


int sum_them_all(const unsigned int n, ...)

{
	unsigned int a;

	int sum = 0;

	va_list args;

	if (!n)
	{

		return (0);

	}

	va_start(args, n);

	for (a = 0; a < n; a++)

	{

		sum += va_arg(args, int);

	}

	va_end(args);

	return (sum);
}
