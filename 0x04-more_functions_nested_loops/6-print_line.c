#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int e;

		for (e = 1; e <= n; e++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
