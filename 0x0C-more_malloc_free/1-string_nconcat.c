#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *string_nconcat - concatenates n bytes of a string.
 *
 * @s1: string to append.
 *
 * @s2: string to concatenate from.
 *
 * @n: number of bytes from s2 to concatenate to s1.
 *
 * Return: pointer to the resulting string.
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *dot;

	unsigned int num1, num2, l, z;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (num1 = 0; s1[num1] != '\0'; num1++)
		;

	for (num2 = 0; s2[num2] != '\0'; num2++)
		;

	if (n > num2)
		n = num2;

	l = num1 + n;

	dot = malloc(l + 1);

	if (dot == 0)
		return (0);

	for (z = 0; z < l; z++)
		if (z < num1)
			dot[z] = s1[z];
		else
			dot[z] = s2[z - ls1];

	dot[z] = '\0';

	return (dot);
}
