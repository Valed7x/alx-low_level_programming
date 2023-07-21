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
	va_list anything;

	unsigned int w = 0;

	char *string;

	va_start(anything, format);

	while (format && format[w])
	{
		switch (format[w])
		{
			case 'c':

				printf("%c", va_arg(anything, int));

				break;

			case 'i':

				printf("%i", va_arg(anything, int));

				break;

			case 'f':

				printf("%f", va_arg(anything, double));

				break;

			case 's':

				string = va_arg(anything, char *);

				if (string == NULL)

				{

					string = "(nil)";

				}
				printf("%s", string);
				break;
			default:
				break;
		}
		if (format[w + 1] &&
				(format[w] == 'c' || format[w] == 'i' || format[w] == 'f' || format[w] == 's'))
			printf(", ");
		w++;
	}
	va_end(anything);

	printf("\n");
}
