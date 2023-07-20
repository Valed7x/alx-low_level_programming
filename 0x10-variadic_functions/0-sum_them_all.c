#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the int arguments.
 *
 * @n: number of arguments.
 *
 * Return: sum of its parameters.
 */


int sum_them_all(const unsigned int n, ...)

{
	va_list mynum;

	unsigned int a, add = 0;

	va_start(mynum, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (a = 0; a < n; a++)
		{

			add += va_arg(mynum, int);

		}
		va_end(mynum);

		return (add);
	}
}
