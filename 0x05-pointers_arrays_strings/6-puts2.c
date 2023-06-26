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
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a += 2)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
