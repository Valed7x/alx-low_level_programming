#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character
 * should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, e;

		for (a = 0; a < n; a++)
		{
			for (e = 0; e < n; e++)
			{
				if (e == a)
					_putchar('\\');
				else if (e < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
