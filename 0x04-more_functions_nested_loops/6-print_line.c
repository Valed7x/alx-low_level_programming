#include "main.h"

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int num;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 1; num <= n; num++)
			_putchar('_');
		_putchar('\n');
	}
}
