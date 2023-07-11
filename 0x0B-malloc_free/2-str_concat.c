#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: string to concatenate.
 *
 * @s2: other string to concatenate.
 *
 * Return: 0
*/


char *str_concat(char *s1, char *s2)

{
	char *s3;
	unsigned int a = 0, b = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;

	s3 = malloc(sizeof(char) * (num1 + num2 + 1));
	if (s3 == 0)
		return (0);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < num1)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (num1 + num2))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
