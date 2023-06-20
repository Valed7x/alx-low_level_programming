#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int ab, ef, jk;

	for (ab = 0; ab < 10; ab++)
	{
		for (ef = 0; ef < 10; ef++)
		{
			jk = ef * ab;
			if (ef == 0)
			{
				_putchar(jk + '0');
			}

			if (jk < 10 && ef != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(jk + '0');
			}
			else if (jk >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((jk / 10) + '0');
				_putchar((jk % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
