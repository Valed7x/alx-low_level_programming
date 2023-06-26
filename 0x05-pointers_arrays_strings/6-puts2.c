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
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
