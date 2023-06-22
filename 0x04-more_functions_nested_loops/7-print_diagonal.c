#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int chr, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (chr = 1; chr <= n; chr++)
		{
			for (space = 1; space <= chr, space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
