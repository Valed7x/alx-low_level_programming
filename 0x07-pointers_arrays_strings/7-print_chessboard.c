#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A function that prints the chessboard.
 *
 * @a: The chessboard to be printed.
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])

{
	int e;
	int b;

	for (e = 0; e < 8; e++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[e][b]);
		_putchar('\n');
	}
}
