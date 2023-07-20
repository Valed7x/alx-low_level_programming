#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints strings.
 *
 * @separator: the separator between strings.
 *
 * @n: number of arguments.
 */


void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list g;
	unsigned int a;
	char *z;

	va_start(g, n);

	for (a = 0; a < n; a++)

	{
		z = va_arg(g, char *);

		if (z == 0)
		{

			printf("(nil)");

		}
		else
		{

			printf("%s", z);

		}

		if (separator != 0 && a < (n - 1))

		{

			printf("%s", separator);

		}
	}
	va_end(g);

	printf("\n");
}
