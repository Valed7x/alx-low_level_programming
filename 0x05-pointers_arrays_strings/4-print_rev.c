#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse the string
 *
 * @s: the string
 *
 * Return: void 0
 */

void print_rev(char *s)

{
	int a, l;

	l = strlen(s);
	for (a = l - 1; a >= 0; a--)
	{
		printf("%c", s[a]);
	}
	printf("\n");
}
