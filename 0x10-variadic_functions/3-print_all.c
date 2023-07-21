#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything format specifier.
 *
 * @format: specifier string.
 */


void print_all(const char * const format, ...)
{
	int z = 0;
	char *r, *p = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[z])
		{
			switch (format[z])
			{
				case 'c':
					printf("%s%c", p, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!r)
						r = "(nil)";
					printf("%s%s", p, r);
					break;
				default:
					z++;
					continue;
			}
			p = ", ";
			z++;
		}
	}

	printf("\n");
	va_end(list);
}
