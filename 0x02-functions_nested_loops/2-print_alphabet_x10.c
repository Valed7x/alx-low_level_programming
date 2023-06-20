#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase,
 * by a new line
 */

void print_alphabet_x10(void)
{
	char h;
	int e;

	e = 0;

	while (e < 10)
	{
		h = 'a';
		while (h <= 'z')
		{
			_putchar(h);
			h++;
		}
		_putchar('\n');
		e++;
	}
}
