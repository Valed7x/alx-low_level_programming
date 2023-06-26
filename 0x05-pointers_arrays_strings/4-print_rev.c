#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse the string
 *
 * @s: the string
 *
 * Return: void 0
*/

void rev_string(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
{
