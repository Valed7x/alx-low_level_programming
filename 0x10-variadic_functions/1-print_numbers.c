#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_numbers - prints all numbers.
 *
 * @separator: sparator string.
 *
 * @n: count of arguments.
 */


void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list b;
	unsigned int a;

	va_start(b, n);


	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(b, int));

		if (separator != 0 && a < (n - 1))
		{

			printf("%s", separator);

		}
	}

	va_end(b);

	printf("\n");
}
