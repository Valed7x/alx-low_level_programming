#include "main.h"

/**
 * print_numbers - prints the numbers 0 - 9
 *
 * followed by a new line
 *
 * Return: 0
*/

void print_numbers(void)
{
	int b = 0;

	do {
		_putchar(b + 48);
		b++;

	} while (b >= 0 && b <= 9);
	_putchar('\n');
}
