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
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[a][b]);
		_putchar('\n');
	}
}
