#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 *
 * followed by a new line.
 *
 * @str: string to print the chars from.
 *
 * Return: 0
*/

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (a  % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n);
}
