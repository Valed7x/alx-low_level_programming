#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * followed by a new line.
 *
 * @str: string to be printed.
 *
 * Return: half of input
*/

void puts_half(char *str)

{
	int num, a, b;

	num = 0;

	while (str[num] != '\0')
	{
		num++;
	}

	if (num % 2 == 0)
	{
		for (b = num / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	} else if (num % 2)
	{
		for (a = (num - 1) / 2; a < num - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
