#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	int h;

	for (h = 'a'; h <= 'z'; h++)
		_putchar(h);
	_putchar('\n');
}
