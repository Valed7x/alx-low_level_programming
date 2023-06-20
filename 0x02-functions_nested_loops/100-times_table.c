#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int a, b, e;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				e = b * a;
				if (b == 0)
				{
					_putchar(e + '0');
				} else if (e < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(e + '0');
				} else if (e >= 10 && e < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((e / 10) + '0');
					_putchar((e % 10) + '0');
				} else if (e >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((e / 100) + '0');
					_putchar(((e / 10) % 10) + '0');
					_putchar((e % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
