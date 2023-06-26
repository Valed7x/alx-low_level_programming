#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 *
 * followed by a new line.
 *
 * @str: string to print the chars from
*/
void puts2(char *str)

{
	int num, num1;

	num = 0;

	while (str[num] != '\0')
	{
		num++;
	}

	for (num1 = 0; num1 < num; num1 += 2)
	{
		_putchar(str[num1]);
	}

	_putchar('\n');
}
