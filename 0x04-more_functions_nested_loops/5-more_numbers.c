#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * followed by a new line
 *
 * Return: 0 Success
*/
void more_numbers(void)
{
	int num, a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			num = b;
			if (b > 9)
			{
				_putchar(1 + 48);
				num = b % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
