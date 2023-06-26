#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse the string
 * @s: the string.
 * Return: void.
 */
void print_rev(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
